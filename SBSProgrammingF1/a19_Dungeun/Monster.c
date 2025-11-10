
#include <stdio.h>
#include <stdlib.h>
#include "Battle.h"
#include "Monster.h"


// 계층몬스터 조우 스텍
Monster_Stack monster_stack = { 1,1,1,1,1 };



// 조우할 몬스터 형태
Monster_Setting Monster_1 = {
	{0},
	{0,0,0,0,0},
	{0,0,0,0,0,0,0}
};
Monster_Setting Monster_2 = {
	{0},
	{0,0,0,0,0},
	{0,0,0,0,0,0,0}
};

// 조우할 몬스터 라이브러리
void MonsterStetusIntex(Monster_Species Monster_type, int Section)
{
	switch (Monster_type)
	{
	case 0: // 슬라임
		Monster_1.Monster_stetus.STR = 4 * (Section / 2);
		Monster_1.Monster_stetus.INT = 10 * (Section / 2);
		Monster_1.Monster_stetus.VIT = 10 * (Section / 2);
		Monster_1.Monster_stetus.AGI = 2 * (Section / 2);
		Monster_1.Monster_stetus.DEX = 4 * (Section / 2);
	case 1: // 고블린
		Monster_1.Monster_stetus.STR = 6 * (Section / 2);
		Monster_1.Monster_stetus.INT = 2 * (Section / 2);
		Monster_1.Monster_stetus.VIT = 6 * (Section / 2);
		Monster_1.Monster_stetus.AGI = 6 * (Section / 2);
		Monster_1.Monster_stetus.DEX = 7 * (Section / 2);
	case 2: // 스켈레톤
		Monster_1.Monster_stetus.STR = 7 * (Section / 2);
		Monster_1.Monster_stetus.INT = 4 * (Section / 2);
		Monster_1.Monster_stetus.VIT = 8 * (Section / 2);
		Monster_1.Monster_stetus.AGI = 2 * (Section / 2);
		Monster_1.Monster_stetus.DEX = 2 * (Section / 2);
	case 3: // 늑대
		Monster_1.Monster_stetus.STR = 10 * (Section / 2);
		Monster_1.Monster_stetus.INT = 3 * (Section / 2);
		Monster_1.Monster_stetus.VIT = 9 * (Section / 2);
		Monster_1.Monster_stetus.AGI = 10 * (Section / 2);
		Monster_1.Monster_stetus.DEX = 10 * (Section / 2);
	}

};

void EncounterMonster_DATA(int Encount, int Section)
{
	// 몬스터 텍스트 지정
	const char* Monster_Text[5] = {
		"슬라임","고블린","스켈레톤","늑대","드라칸"
	};

	switch (Encount)
	{
	case 1:
		Monster_1.Monster_type = rand() % 4;
		MonsterStetusIntex(Monster_1.Monster_type, Section);
		break;
	case 2:
		Monster_1.Monster_type = rand() % 4;
		MonsterStetusIntex(Monster_1.Monster_type, Section);

		Monster_2.Monster_type = rand() % 4;
		MonsterStetusIntex(Monster_2.Monster_type, Section);
	}


	// 보스몬스터의 개체선언
	Monster_Setting Boss_Drakan = {
		{5},
		// 보스 몬스터의 스테이터스   
		// STR,INT,VIT,AGI,DEX
		{120,80,250,80,110},
		// 보스 몬스터 전투 능력치
		// [1] HP, [2] MP,[3] ATK, [4] MATK, [5] DEF, [6] MDEF, [7]CRT 
		{0,0,0,0,0,0,0}
	};

	if (Encount == 1)
	{
		printf("%s 가 나타났다.", Monster_Text[Monster_1.Monster_type]);
		printf("능력치는\n");
		printf("최대체력 : %d\n", Monster_1.Monster_power.HP);
		printf("최대마나 : %d\n", Monster_1.Monster_power.MP);
		printf("물리공격 : %d\n", Monster_1.Monster_power.ATK);
		printf("마법공격 : %d\n", Monster_1.Monster_power.MATK);
		printf("물리방어 : %d\n", Monster_1.Monster_power.DEF);
		printf("마법방어 : %d\n", Monster_1.Monster_power.MDEF);
	}
	else if (Encount == 2)
	{
		printf("%s 가 나타났다.", Monster_Text[Monster_1.Monster_type]);
		printf("능력치는\n");
		printf("최대체력 : %d\n", Monster_1.Monster_power.HP);
		printf("최대마나 : %d\n", Monster_1.Monster_power.MP);
		printf("물리공격 : %d\n", Monster_1.Monster_power.ATK);
		printf("마법공격 : %d\n", Monster_1.Monster_power.MATK);
		printf("물리방어 : %d\n", Monster_1.Monster_power.DEF);
		printf("마법방어 : %d\n", Monster_1.Monster_power.MDEF);

		printf("%s 가 나타났다.", Monster_Text[Monster_2.Monster_type]);
		printf("능력치는\n");
		printf("최대체력 : %d\n", Monster_2.Monster_power.HP);
		printf("최대마나 : %d\n", Monster_2.Monster_power.MP);
		printf("물리공격 : %d\n", Monster_2.Monster_power.ATK);
		printf("마법공격 : %d\n", Monster_2.Monster_power.MATK);
		printf("물리방어 : %d\n", Monster_2.Monster_power.DEF);
		printf("마법방어 : %d\n", Monster_2.Monster_power.MDEF);
	}

	

}

