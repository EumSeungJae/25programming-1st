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
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// 카드관련
int CardDeckSelect = 0;
int GetCardCount = 2;
int OverBust = 21;

// 플레이어 관련

int PlayerScore = 0;

// 컴퓨터(딜러) 관련

int DealerScore = 0;
int DealerLiteScore = 17;
// 카드 매수 설정 1덱 = 13장
void CardDeckSetting()
{
}

int main()
{
	for (int i = 0; PlayerScore < 0; i++)
	{

	while (CardDeckSelect <= 1 || CardDeckSelect >= 4)
	{
		printf("카드 덱을 선택하세요 (1~4) : ");
		
		scanf("%d", &CardDeckSelect);

		if (CardDeckSelect <= 1 && CardDeckSelect >= 4)
		{
			printf("선택한 카드 덱 : %d 세트\n", CardDeckSelect);
			break;
		}
		else 
		{
			printf("잘못된 입력입니다. 1~4 사이의 숫자를 입력하세요.\n");
			return;
		}
		// CardDeckSetting();
	}
	}
}