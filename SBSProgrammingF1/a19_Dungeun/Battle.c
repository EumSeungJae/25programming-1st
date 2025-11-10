#include "Battle.h"

// 모든개체 능력치 계산용
void _PowerSetting(_Battle_Power power, _Stetus stetus)
{
	power.HP = (stetus.VIT * 10);
	power.MP = (stetus.INT * 4);
	power.ATK = (stetus.STR * 3) + (stetus.DEX);
	power.MATK = (stetus.INT * 3) + (stetus.DEX);
	power.DEF = stetus.VIT * 2;
	power.MDEF = (stetus.INT * 2) + (stetus.VIT);
	power.CRT = stetus.DEX / 10 + stetus.AGI / 10;
};

//