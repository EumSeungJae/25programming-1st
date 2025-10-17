/*
* 날짜     : 2025-10-16
* 학습목표 : 자료형과 변수
* 실습목표 : 실제 게임을 분석해서 자료형을 이해한다.
*/

// 자료형 Data Type
// Data : 숫자, 그림, 기호 정의되어 있지 않은 정보
// 컴퓨터에게 명령을 내리고 싶다.
// 더블킬(문자), 스코어 타임(정수), 스탯 정보(소수)
// 이미지 1920 x 1080, 소리(파장)

// 자료들의 특징에 따라서 형태를 분류를 했다. Type
// 자료형 : 문자, 정수, 실수(정수)

// 자료형을 이용하는 방법
// (어떤타입) "이름" variable 변수
// int 정수 float 실수(소수)
// 함수를 사용하는 방법
// int 정수를표현하는 타입
// float 실수(소수)
// char  문자 "H e l l o"
// string 문자열


#include <stdio.h>

int main()
{
	// 더블킬 게임 화면에 출력하고 싶다.
	printf("더블킬 \n");
	// 레드팀과 블루팀의 스코어를 출력하고 싶다.
	printf("10 vs 25 \n");
	// 챔피언이 가지고 있는 스텟을 출력하고 싶다.
	printf("AD : 10 \n");
	////////////////////////////////////
	// 정수 d , 실수(소수) f = Float = x값뒤f
	int Level = 2;
	int TeemofirstLevelHP = 598;
	int TeemoGrowthHP = 104;

	int TeemofirstLevelMana = 267;
	int TeemoGrowthMana = 25;

	int TeemoBaseATK = 54;
	int TeemoGrowthATK = 2;

	float TeemoBaseASPD = 0.687f;
	float TeemoGrowthASPD = 3.38f;

	int TeemoBaseSRH = 5; //초당 체력회복력
	int TeemoGrowthSRH = 0;

	int TeemoBaseSRM = 5; //초당 마나회복력
	int TeemoGrowthSRM = 0;

	printf("티모의 정보\n");
	printf("체력 : %d (+%d)\n", TeemofirstLevelHP , TeemoGrowthHP);       // 598 + 104(현제레벨 -1)
	printf("현재 체력 : %d\n", TeemofirstLevelHP + (Level - 1) * TeemoGrowthHP);
	printf("마나 : %d (+%d)\n", TeemofirstLevelMana , TeemoGrowthMana);
	printf("현재 마나 : %d\n", TeemofirstLevelMana + (Level - 1) * TeemoGrowthMana);
	printf("공격력 : %d (+%d)\n", TeemoBaseATK , TeemoGrowthATK);
	printf("현재 공격력 : %d\n", TeemoBaseATK + (Level - 1) * TeemoGrowthATK);
	printf("공격 속도 : %f (+%f)\n", TeemoBaseASPD , TeemoGrowthASPD);
	printf("현재 공격 속도 : %f\n", TeemoBaseASPD + (Level - 1) * TeemoGrowthASPD);
	printf("5초당 체력회복 : %d(+%d)\n", TeemoBaseSRH , TeemoGrowthSRH);
	printf("5초당 마나회복 : 5(+0)\n");
	printf("방어력 : 24(+4)\n");

	// 이 정보를 컴퓨터가 내가 원하는 결과값으로 실행을 했나요?
	// 네.
	// (만족) vs (조금 더 해야한다.)
	
	// 5레벨일때의 캐릭터의 능력치정보는 어떻게 되나요?

	// 다른 챔피언으로도 위의 방식을 사용해서 표현해보세요.

	// 분석해보고 싶은 게임의 정보를 하나 가져옵니다.
	// 수식표현
}

