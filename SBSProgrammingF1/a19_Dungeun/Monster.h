#pragma once
#include "Battle.h"

typedef struct Monster_stack {
	int MonsterSwarm;
	int BossMonster;
}Monster_Stack;

typedef enum {  // 몬스터 종족
	Slime,
	Goblin,
	Skeleton,
	wolf,
	Drakan = 99
}Monster_Type;

typedef struct {
	Monster_Type Monster_type;
	_Stetus Monster_stetus;         // 공통 구조체 사용
	_Battle_Power Monster_power;     // 공통 구조체 사용
} Monster_Setting;



void EncounterMonster_DATA(int Encount, int Section);

