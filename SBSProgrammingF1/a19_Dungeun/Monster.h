#pragma once
#include "Battle.h"

typedef struct Monster_stack {
	int MonsterSwarm1;
	int MonsterSwarm2;
	int MonsterSwarm3;
	int MonsterSwarm4;
	int BossMonster;
}Monster_Stack;

typedef enum {  // 몬스터 종족
	Slime,
	Goblin,
	Skeleton,
	wolf,
	Drakan
}Monster_Species;

typedef struct {
	Monster_Species Monster_type;
	_Stetus Monster_stetus;         // 공통 구조체 사용
	_Battle_Power Monster_power;     // 공통 구조체 사용
} Monster_Setting;




void MonsterStetusIntex(Monster_Species Monster_type, int Section);
void EncounterMonster_DATA(int Encount, int Section);