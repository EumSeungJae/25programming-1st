
#include <stdio.h>
#include <stdlib.h>
#include "Battle.h"
#include "Monster.h"

Monster_Type monster_1_type=0;
Monster_Type monster_2_type=0;

_Stetus monster_1_stetus = { 0,0,0,0,0 };
_Stetus monster_2_stetus = { 0,0,0,0,0 };

_Battle_Power monster_1_power = { 0,0,0,0,0,0,0 };
_Battle_Power monster_2_power = { 0,0,0,0,0,0,0 };


// 조우할 몬스터 라이브러리
void Monster_1_StetusIntex(int Monster_type, int Section)
{
	switch (Monster_type)
	{
	case 0: // 슬라임
		monster_1_stetus.STR = 4 * (Section + 1) / 2;
		monster_1_stetus.INT = 10 *(Section + 1) / 2;
		monster_1_stetus.VIT = 10 *(Section + 1) / 2;
		monster_1_stetus.AGI = 2 * (Section + 1) / 2;
		monster_1_stetus.DEX = 4 * (Section + 1) / 2;
		break;
	case 1: // 고블린
		monster_1_stetus.STR = 6 * (Section + 1) / 2;
		monster_1_stetus.INT = 2 * (Section + 1) / 2;
		monster_1_stetus.VIT = 6 * (Section + 1) / 2;
		monster_1_stetus.AGI = 6 * (Section + 1) / 2;
		monster_1_stetus.DEX = 7 * (Section + 1) / 2;
		break;
	case 2: // 스켈레톤
		monster_1_stetus.STR = 7 * (Section + 1) / 2;
		monster_1_stetus.INT = 4 * (Section + 1) / 2;
		monster_1_stetus.VIT = 8 * (Section + 1) / 2;
		monster_1_stetus.AGI = 2 * (Section + 1) / 2;
		monster_1_stetus.DEX = 2 * (Section + 1) / 2;
		break;
	case 3: // 늑대
		monster_1_stetus.STR = 10 * (Section + 1) / 2;
		monster_1_stetus.INT = 3 *  (Section + 1) / 2;
		monster_1_stetus.VIT = 9 *  (Section + 1) / 2;
		monster_1_stetus.AGI = 10 * (Section + 1) / 2;
		monster_1_stetus.DEX = 10 * (Section + 1) / 2;
		break;
	}
	_PowerSetting(&monster_1_power, monster_1_stetus);
};

void Monster_2_StetusIntex(int Monster_type, int Section)
{
	switch (Monster_type)
	{
	case 0: // 슬라임
		monster_2_stetus.STR = 4 * (Section + 1) / 2;
		monster_2_stetus.INT = 10 * (Section + 1) / 2;
		monster_2_stetus.VIT = 10 * (Section + 1) / 2;
		monster_2_stetus.AGI = 2 * (Section + 1) / 2;
		monster_2_stetus.DEX = 4 * (Section + 1) / 2;
		break;
	case 1: // 고블린
		monster_2_stetus.STR = 6 * (Section + 1) / 2;
		monster_2_stetus.INT = 2 * (Section + 1) / 2;
		monster_2_stetus.VIT = 6 * (Section + 1) / 2;
		monster_2_stetus.AGI = 6 * (Section + 1) / 2;
		monster_2_stetus.DEX = 7 * (Section + 1) / 2;
		break;
	case 2: // 스켈레톤
		monster_2_stetus.STR = 7 * (Section + 1) / 2;
		monster_2_stetus.INT = 4 * (Section + 1) / 2;
		monster_2_stetus.VIT = 8 * (Section + 1) / 2;
		monster_2_stetus.AGI = 2 * (Section + 1) / 2;
		monster_2_stetus.DEX = 2 * (Section + 1) / 2;
		break;
	case 3: // 늑대
		monster_2_stetus.STR = 10 * (Section + 1) / 2;
		monster_2_stetus.INT = 3 * (Section + 1) / 2;
		monster_2_stetus.VIT = 9 * (Section + 1) / 2;
		monster_2_stetus.AGI = 10 * (Section + 1) / 2;
		monster_2_stetus.DEX = 10 * (Section + 1) / 2;
		break;
	}
	_PowerSetting(&monster_2_power, monster_2_stetus);
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
		monster_1_type = rand() % 4;
		Monster_1_StetusIntex(monster_1_type, Section);

		break;
	case 2:
		monster_1_type = rand() % 4;
		Monster_1_StetusIntex(monster_1_type, Section);

		monster_2_type = rand() % 4;
		Monster_2_StetusIntex(monster_2_type, Section);

		break;
	}

	if (Encount == 1)
	{
		printf("%s 가 나타났다.", Monster_Text[monster_1_type]);
		printf("능력치는\n");

		printf("STR : %d\n", monster_1_stetus.STR);
		printf("INT : %d\n", monster_1_stetus.INT);
		printf("VIT : %d\n", monster_1_stetus.VIT);
		printf("AGI : %d\n", monster_1_stetus.AGI);
		printf("DEX : %d\n", monster_1_stetus.DEX);
		

		printf("최대체력 : %d\n", monster_1_power.HP);
		printf("최대마나 : %d\n", monster_1_power.MP);
		printf("물리공격 : %d\n", monster_1_power.ATK);
		printf("마법공격 : %d\n", monster_1_power.MATK);
		printf("물리방어 : %d\n", monster_1_power.DEF);
		printf("마법방어 : %d\n", monster_1_power.MDEF);
	}
	else if (Encount == 2)
	{
		printf("%s 가 나타났다.", Monster_Text[monster_1_type]);
		printf("능력치는\n");
		printf("최대체력 : %d\n", monster_1_power.HP);
		printf("최대마나 : %d\n", monster_1_power.MP);
		printf("물리공격 : %d\n", monster_1_power.ATK);
		printf("마법공격 : %d\n", monster_1_power.MATK);
		printf("물리방어 : %d\n", monster_1_power.DEF);
		printf("마법방어 : %d\n", monster_1_power.MDEF);

		printf("%s 가 나타났다.", Monster_Text[monster_2_type]);
		printf("능력치는\n");
		printf("최대체력 : %d\n", monster_2_power.HP);
		printf("최대마나 : %d\n", monster_2_power.MP);
		printf("물리공격 : %d\n", monster_2_power.ATK);
		printf("마법공격 : %d\n", monster_2_power.MATK);
		printf("물리방어 : %d\n", monster_2_power.DEF);
		printf("마법방어 : %d\n", monster_2_power.MDEF);
	}

	// 보스몬스터의 개체선언
	Monster_Setting Boss_Drakan = {
		{99},
		// 보스 몬스터의 스테이터스   
		// STR,INT,VIT,AGI,DEX
		{120,80,250,80,110},
		// 보스 몬스터 전투 능력치
		// [1] HP, [2] MP,[3] ATK, [4] MATK, [5] DEF, [6] MDEF, [7]CRT 
		{0,0,0,0,0,0,0}
	};

	

}

