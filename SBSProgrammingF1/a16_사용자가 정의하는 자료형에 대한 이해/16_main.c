// 구조체와 열거형

#include "sample.h"
/*
*  열거형
*  - 상수 : 값을 고정시키겠다.
*  - const 변수 선언;
*  - #define PI 3.14
*/

// 열거형 : 0   ,1    ,2,3,4,5,6,7,8,9
//          동전, 포션,

#define MonsterCount 10



enum GameText {
	점수,
	동전,
	체력
}GameText;

typedef enum {  // 무명형식
	Orc,
	Human,
	Undead,
	Angel,
	Devil,
	Undefined = 100
}Race;

void SelectJob();
void setPlayerStat(JOB selectJob, int* HPptr, int ATKptr);
// #define 점수 = 0, 동전 = 1, 체력 = 2 사용하는 것이랑 enum 정의하는 것의 차이점이 무엇일까요?

// 열거형 간결하게 사용하는 방법 typedef

// 조건문과 열거형을 같이 사용하는 패턴

int main()
{
	// enum GameText GameText = Score;

	// 상수는 값을 변경하지 못하게 하는 방법이다.
	const int count = 10;
	printf("몬스터의 수 : %d\n", MonsterCount);
	printf("몬스터의 수 : %d\n", count);

	const char* Text[3] = { "점수","은화"," 체력" };
	const char* RaceName[3] = { "오크","인간","언데드" };
	printf("%s\n", Text[점수]); // 숫자를 어떠한 의미를 가지도록 약속을 했다.
	printf("%s\n", RaceName[Orc]);

	enum GameText newGameText = 점수;
	newGameText = 동전;
	//if (newGameText == 점수)
	//{
	//	// 점수인 경우에 무엇을 해라.
	//	// score를 화면에 출력하라.
	//	printf("점수를 출력하는 예제\n");
	//}
	//else if (newGameText == 동전)
	//{
	//	printf("동전을 출력하는 예제\n");
	//
	//}
	//else if (newGameText == 체력)
	//{
	//	printf("체력을 출력하는 예제\n");
	//
	//}
	Race race = Undead;
	switch (race)
	{
	case Orc:
		printf("오크입니다.\n");
		break;
	case Human:
		printf("인간입니다.\n");
		break;
	case Undead:
		printf("해골입니다.\n");
		break;

	default: race = Undefined;
		break;
	}

	JOB myJOB = 정의되지않음;
	int baseHP = 0;
	int baseATK = 0;
	int* baseHPptr = &baseHP;
	int* baseATKptr = &baseATK;

	SelectJob(&myJOB); // 직업을 선택하는 함수
	setPlayerStat(myJOB, baseHPptr, baseATKptr);

	printf(" 당신의 체력은 %d\n", baseHP);
	printf(" 당신의 공격력 %d\n", baseATK);
	// JOB에 따라서 기본적인 체력과 공격력이 다르다.
	// 직업에 따른 캐릭터 설정(myJOB); // int hp int atk

}