// 이름에 이유가 있다. Function = 수학 시간
// 함수가 무엇일까? 처리 절차를 거치면 어떤 결과값이 반환되는 기능
// 함수를 왜 쓸까?

// 반환값 함수 이름 (매개 변수); Head
// {  본문  }                    Body

// 

// 메인 함수
// 프로그램을 시작과 끝을 표현하는 기능을 하고 있다.

// 함수를 먼저 생성하고 - 생성한 함수를 사용
// 반환타입 + 함수이름 ( 매개 변수 ); - 작업을 통해서만 함수가 생성된다.

// 함수를 표현하는 방식에는 4가지 유형
// 반환값 x 인자값 x
// 반환값 o 인자값 x
// 반환값 x 인자값 o
// 반환값 o 인자값 o

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Meth.h"
//#include "8_main.h"	

void SelectCharacter();

int main(void)
{

	int num1 = 1;
	int num2 = 2;

	AddPlusFunction(num1, num2); // statement ( 명령'문' ) Add 함수에 num1, num2를 인자로서 실행하라

	AddPlusFunction(3, 5);      // add 함수 3 -> num1, 5 -> num2 Add함수를 실행하라

	minus(num1, num2);
	multiply(2, 3);
	divide(100, 2);

	//  플레이어가 낸 가위 바위 보에 해당 하는 숫자를 출력하고 싶다.
	int playerchoice = SelectPlayerBehavior();

	// 캐릭터의 초기 스텟 설정
	SelectCharacter(20);

	return 0;
}

// 캐릭터를 선택해서 스탯을 분배한다던가 하는 함수
// dice = STR, DEX, INT, LUK 분배
// 이 코드 남은 부분을 완성
/*
*  반환값이 void 함수를 왜 사용할까?
*  반환값이 없더라도 코드를 수정할 수 있는가? 주소의 개념을 이해하면
*  함수 안에서만 코드가 실행이 되고 실제로는 변경이 안되는 기능이 필요하다.
*  (ex) Ui 다음 레벨을 보여주는 기능이 실제로 장비의 성능을 변경시키면?
*                                 Value vs Reference
*/

// 스텟 포인트를 ㅅ분배해서 STR, DEX, INT, LUK 잘 출력되도록 만들어주세요.
// startPoint 보다 넘는 값을 실행해서는 안됩니다.
// 분배한 스탯이 mine에서도 사용ㄷ될려면 어떻게 해야할까? <고민>
void SelectCharacter(int StartPoint)
{
	printf("%d 스텟 포인트를 분배해주세요\n");
	printf("STR : 0 DEX : 1 INT : 2 LUK : 3\n");
	int selectNumber = 0;
	int remainPoint = StartPoint;
	int spendPoint;
	int STR = 0;
	int DEX = 0;
	int INT = 0;
	int LUK = 0;
	scanf("%d", &selectNumber);
	if (selectNumber == 0)
	{

		scanf("%d", &spendPoint);

		remainPoint = remainPoint - spendPoint;
		STR = STR + spendPoint;
	}
	else if (selectNumber == 1)
	{

		scanf("%d", &spendPoint);

		remainPoint = remainPoint - spendPoint;
		DEX = DEX + spendPoint;
	}
	else if (selectNumber == 2)
	{

		scanf("%d", &spendPoint);

		remainPoint = remainPoint - spendPoint;
		INT = INT + spendPoint;
	}
	else if (selectNumber == 3)
	{

		scanf("%d", &spendPoint);

		remainPoint = remainPoint - spendPoint;
		LUK = LUK + spendPoint;
	}
	else
	{

		return;
	}

	// remainPoint < spendPoint 이 경우를 어떻게 탈출할 것인가?
	// 어떤 타이밍에 return을 하고 아래코드를 실행할 것인가? 
	// 조건문으로 표현을 하세요.

	printf(" STD : %d, DEX : %d, INT : %d, LUK : %d\n", STR, DEX, INT, LUK);


}

int SelectPlayerBehavior()
{
	int num = 0;
	scanf("%d", &num);
	if (num == 1)
		return 1;  // 가위
	else if (num == 2)
		return 2;  // 바위
	else if (num == 3)
		return 3;  // 보
}

