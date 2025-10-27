// 제작목표  :  블랙잭
// 제작방법  : 반복문(for, While) 과 조건문 (if) 활용하여 만든다.

/*
* 1. 카드의 숫자는 1~13까지있다. 최소 1세트(13)장에서 최대 4세트(52)장을 선택할수있다.
* 2. 플레이어와 딜러는 각각 카드를 2장씩 받는다.
* 3. 플레이어는 카드를 더 받을지 말지 선택할수있다.
* 4. 카드의 합이 21을 넘으면 버스트가 되어 패배한다.
* 5. 딜러는 카드의 합이 17이상이 될때까지 카드를 더 받는다.
* 6. 플레이어와 딜러의 카드 합을 비교하여 승패를 결정한다.
* 7. 플레이어는 10코인이 기본지급되고 코인이 0이되어야 게임이 끝난다. 승리시 코인이 증가한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 카드관련
// 카드사용갯수 설정 13^n 값 구하기 n값을 입력받자.
int CardMarkerSelect;

void CardSetting(DeckSymbol)
{
	for (int Setting = 1; CardMarkerSelect >= 1 || CardMarkerSelect <= 4; Setting++)
	{

		scanf("%d", &CardMarkerSelect);
		
		if (CardMarkerSelect >= 1 && CardMarkerSelect <= 4)
		{
			// 옳은 범위내의 값을 입력시 넘어가도록
			printf(" 사용할 카드문양은 ");
			for (int i = 1; i == CardMarkerSelect; i++)
			{
				printf("%c ", DeckSymbol);
				DeckSymbol + 1;
			}
			printf("입니다.\n");
			printf(" 확인후 아무키나 눌러주세요.\n");
			_getch();
			system("cls");
			break;
		}
		else
		{
			// 옳은 범위외의 값을 입력시 다시설정하도록
			printf(" 다시 입력하세요.\n");
			printf(" 사용할 문양수 : ");
			CardSetting();
			return;
		}
	}
}

// 사용카드 랜덤값 제작
void RandomGetCard(int totalCards)
{
	for (int i = 0; i < totalCards; i++)
	{
		int randIndex = (rand() % 13) + 1;

	}
}

int BaseGetCard = 2;

// 플레이어 관련

int PlayerCoin = 10;

// 컴퓨터(딜러) 관련
int DealerMiniScore = 17;
// 카드 매수 설정 1덱 = 13장
void CardDeckSetting()
{
}

int main()
{
	printf(" 사용할 트럼프 문양수를 정해주세요. 1 ~ 4개\n");
	printf(" 사용할 문양수마다 1~13까지 세트로 사용됩니다.\n");
	printf(" 사용할 문양수 : ");
	CardSetting();

	while (PlayerCoin > 0)
	{
		// 카드 셋팅
		// 게임의 진행요소
		//for (int Round = 1; )
		//{
			// 현황
		printf(" 선택된 문양수 : %d\n", CardMarkerSelect);
		printf(" 유저의 코인수 : %d\n", PlayerCoin);
		//

	    //}



	}
}

/*
* 블랙 젝의 구성을 해보자.
* 2025-10-25 블랙잭의 구성수식을 구상해보자.
* 2025-10-26 블랙잭의 반복문의 구성은 어떻게 하는게좋을까? for문과 while의 순환에 대해 생각해보자
*            플레이어의 코인을 0이 되면 패배하게끔 만들려면 뭐가좋을까 가장 깔끔한건 while일까?
*            일단 사용할 카드뭉치(1개당13장)을 설정하고 값을 입력후 저장하는거 까지
* 2025-10-28 함수를 이용하여 메인코드의 난잡함을 줄여보고 카드뭉치의 입력값을 함수로 뺀뒤에 카드를 받을 랜덤값을 제작
*            원하는 구상은 카드심볼과 카드를 받는데 여기서 중요한점은 중복이 안되어야 한다는점.
*            예시로 카드뭉치를 2개쓴다면 S(스페이드) 와 C(클로버)를 쓴다고 표기해주고
*            플레이어로 S5 S7 을 받았는데 딜러로 S5 C9 를 받았다면 중복되는 카드가 안나오게끔
*            추가적으로 플레이어의 카드를 더 받을수있게 Hit라는 명령문을 추가해야하고
*            딜러의 최소수치가 17이 넘도록 설정값을 만들어야한다.
*/