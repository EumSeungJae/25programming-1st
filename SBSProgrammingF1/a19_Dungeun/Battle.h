#pragma once

typedef struct { // 모든개체 스테이터스 베이스
	int STR;
	int INT;
	int VIT;
	int AGI;
	int DEX;
}_Stetus;

typedef struct { // 모든개체 전투능력치
	int HP;
	int MP;
	int ATK;
	int MATK;
	int DEF;
	int MDEF;
	int CRT;
}_Battle_Power;

void _PowerSetting(_Battle_Power power, _Stetus stetus);