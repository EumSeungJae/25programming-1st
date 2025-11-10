#include <stdio.h>
#include "Player.h"
#include "Battle.h"


void PlayerSetting()
{
	// 플레이어의 장비
	Player_Setting player_setting = {0,0,1};

	// 텍스트
	const char* Main_Waepon_Text[2] = { "한손검", "대검" };
	const char* Sub_Waepon_Text[2] = { "방패", "맨손" };
	const char* Armor_Text[3] = { "경량","일반","중량" };

	// 출력테스트
	printf("메인무기 : %s\n", Main_Waepon_Text[player_setting.main_waepon]);
	printf("서브무기 : %s\n", Sub_Waepon_Text[player_setting.sub_waepon]);
	printf("갑옷상태 : %s\n", Armor_Text[player_setting.armor]);

	// 플레이어의 스테이터스      STR,INT,VIT,AGI,DEX
	_Stetus Player_Stetus = { 10,  10,  10,  10,  10 };

	// 전투능력치 구조체 생성
	// [1] HP, [2] MP,[3] ATK, [4] MATK, [5] DEF, [6] MDEF, [7]CRT 
	_Battle_Power* Player_Battle_Power;
	PlayerPowerSetting(Player_Stetus, &Player_Battle_Power);

	// 갑옷의 형태차이 0. 경량 / 1. 일반 / 2. 중량 
	if (player_setting.armor == 0)
	{   // 경량일때
		(*Player_Battle_Power).DEF -= 50;
		(*Player_Battle_Power).MDEF -= 50;
		(*Player_Battle_Power).CRT += 5;
	}
	else if (player_setting.armor==2)
	{   // 중량일때
		(*Player_Battle_Power).DEF += 50;
		(*Player_Battle_Power).MDEF += 50;
		(*Player_Battle_Power).CRT -= 5;
	}

	// 메인무기변화  대검 장착시 강제 맨손
	if (player_setting.main_waepon == 1)
	{   // 대검일때 > 보조무기 = 맨손
		player_setting.sub_waepon = 1;
	}

	// 메인무기변화 한손건 장착시 0. 방패 / 1. 맨손
	if (player_setting.sub_waepon == 0)
	{   // 방패사용시
		(*Player_Battle_Power).DEF += 50;
	}
	else if (player_setting.sub_waepon == 1)
	{   // 방패미사용시
		(*Player_Battle_Power).CRT += 5;
	}

	// 능력치 변화 출력 테스트
	printf("최대체력 : %d\n", (*Player_Battle_Power).HP);
	printf("최대마나 : %d\n", (*Player_Battle_Power).MP);
	printf("물리공격 : %d\n", (*Player_Battle_Power).ATK);
	printf("마법공격 : %d\n", (*Player_Battle_Power).MATK);
	printf("물리방어 : %d\n", (*Player_Battle_Power).DEF);
	printf("마법방어 : %d\n", (*Player_Battle_Power).MDEF);

}
