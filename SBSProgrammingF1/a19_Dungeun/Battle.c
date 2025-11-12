#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Monster.h"
#include "Player.h"
#include "Battle.h"

// 모든개체 능력치 계산용
void _PowerSetting(_Battle_Power* battle, _Stetus stetus)
{
    battle->HP = stetus.VIT * 10;
    battle->MP = stetus.INT * 5;
    battle->ATK = (stetus.STR * 3) + (stetus.DEX);
    battle->MATK = (stetus.INT * 3) + (stetus.DEX);
    battle->DEF = stetus.VIT * 3;
    battle->MDEF = (stetus.INT * 2) + (stetus.VIT);
    battle->CRT = (stetus.DEX / 4) + (stetus.AGI / 4);
};



void BattleStart(_Battle_Power* player, _Battle_Power* monster, _Stetus player_st, _Stetus monster_st) {
    srand((unsigned int)time(NULL));

    // 체력 관련 초기 설정
    int player_MaxHP = player->HP;
    int player_NowHP = player_MaxHP;
    int monster_MaxHP = monster->HP;
    int monster_NowHP = monster_MaxHP;

    printf("\n===== 전투 시작! =====\n");

    while (player_NowHP > 0 && monster_NowHP > 0) {
        printf("\n당신의 턴입니다!\n");
        printf("1. 공격  2. 방어  3. 회복  4. 도주\n> ");
        int choice;
        scanf("%d", &choice);

        int player_defending = 0; // 방어 여부 체크
        int player_damage = 0;
        int monster_damage = 0;

        switch (choice) {
        case 1: // 공격
        {
            int hit_chance = 90 + (player_st.DEX - monster_st.DEX) / 5 - (monster_st.AGI - player_st.AGI) / 5;
            if (hit_chance < 10) hit_chance = 10;
            if (hit_chance > 99) hit_chance = 99;

            int roll = rand() % 100;
            if (roll < hit_chance) {
                // 크리티컬 계산
                int critRoll = rand() % 100;
                float damage = player->ATK - monster->DEF * 0.3;
                if (critRoll < player->CRT) {
                    damage *= 1.5;
                    printf(" 크리티컬 히트! \n");
                }
                if (damage < 1) damage = 1;
                monster_NowHP -= (int)damage;
                printf("당신의 공격! %d의 피해를 입혔습니다! (명중률 %d%%)\n", (int)damage, hit_chance);
            }
            else {
                printf("공격이 빗나갔습니다!\n");
            }
            break;
        }
        case 2: // 방어
            player_defending = 1;
            printf("당신은 방어 자세를 취했습니다. 방어력이 50%% 상승합니다.\n");
            break;

        case 3: // 회복
        {
            int heal = player_MaxHP * 0.25;
            player_NowHP += heal;
            if (player_NowHP > player_MaxHP) player_NowHP = player_MaxHP;
            printf("체력을 %d 회복했습니다! 현재 HP: %d / %d\n", heal, player_NowHP, player_MaxHP);
            break;
        }

        case 4: // 도주
        {
            int escape = rand() % 100;
            if (escape < 40) {
                printf("성공적으로 도망쳤습니다!\n");
                return;
            }
            else {
                printf("도망에 실패했습니다!\n");
            }
            break;
        }

        default:
            printf("잘못된 입력입니다!\n");
            continue;
        }

        // 몬스터 사망 체크
        if (monster_NowHP <= 0) {
            printf("\n몬스터를 물리쳤습니다!\n");
            break;
        }

        // --- 몬스터 턴 ---
        printf("\n몬스터의 턴!\n");

        int monster_hit = 90 + (monster_st.DEX - player_st.DEX) / 5 - (player_st.AGI - monster_st.AGI) / 5;
        if (monster_hit < 10) monster_hit = 10;
        if (monster_hit > 99) monster_hit = 99;

        int monster_roll = rand() % 100;
        if (monster_roll < monster_hit) {
            int critRoll = rand() % 100;
            float damage = monster->ATK - player->DEF * 0.3;
            if (critRoll < monster->CRT) {
                damage *= 1.5;
                printf(" 몬스터의 치명타 공격! \n");
            }
            if (player_defending) damage *= 0.5;
            if (damage < 1) damage = 1;
            player_NowHP -= (int)damage;
            printf("몬스터가 %d의 피해를 입혔습니다!\n", (int)damage);
        }
        else {
            printf("몬스터의 공격이 빗나갔습니다!\n");
        }

        printf("\n현재 체력: 당신 %d / %d   몬스터 %d / %d\n", player_NowHP, player_MaxHP, monster_NowHP, monster_MaxHP);
    }

    if (player_NowHP <= 0) {
        printf("\n 당신은 쓰러졌습니다... \n");
    }
    else if (monster_NowHP <= 0) {
        printf("\n 전투에서 승리했습니다! \n");
    }
}
