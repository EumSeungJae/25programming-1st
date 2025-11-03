/*
*  자습목표
*  레벨 성장시스템을 만들어낸다. ( 랜덤값으로 경험치를 받는다.)
*  레벨 1당 스테이터스는 5가 증가한다.
*  스테이터스 각 한계 수치는 255다.
*  증가하는 스테이터스는 STR, INT, VIT, AGI, DEX 가있다.
*  스테이터스에 기반하여 오르는 능력치는 공격력, 마법공격력, 체력, 방어력, 마법방어력, 공격속도, 명중률, 캐스팅속도가있다. 
*  초기 스테이터스 포인트로 20이 지급된다.
*  스테이터스 포인트가 총합 502가 되었을때 스테이터스 각 한계가 510까지 풀린다.
*  
*  2025-11-02
*  포인터의 개념도 가져온다.
*  레벨과 스텟관련자료는 헤더를 만들고 각가의 소스파일을 생성후 움긴다.
*/
/*
#include <stdio.h>
#include "Level.h"
#include "Stet.h"
#include <conio.h> // _kbhit(), _getch() 함수 사용을 위해 필요
#include <windows.h> // PlayerKeyBoardSelect() 함수 사용을 위해 필요


// 시스템 설명 코딩

// 레벨시스템
// 레벨증가 및 경험치증가

//extern

// 메인코딩
int main()
{
	int Level = 1;
	int STR = 1;
	int INT = 1;
	int VIT = 1;
	int AGI = 1;
	int DEX = 1;
	int MaxStetPoint = 255;

	int BaseStetPoint = 20;
	int NewStetPoint = 0;
	int StetPoint = BaseStetPoint + NewStetPoint;
	
	LevelUpSystem(Level, STR, INT, VIT, AGI, DEX);
}

*/
/*
*  2025-10-28 
   스텟분배 구상설정

*  2025-11-02 
   
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

void ShowStatus(int stats[], const char* names[], int selected, int remainPoint);

int main()
{
    int stats[5] = { 0, 0, 0, 0, 0 };
    const char* statNames[5] = { "STR", "INT", "VIT", "AGI", "DEX" };
    int selected = 0;
    int remainPoint = 10;

    while (1)
    {
        system("cls");
        ShowStatus(stats, statNames, selected, remainPoint);
        printf("↑↓ : 이동 | ←→ : 조정 | Enter : 확정\n");

        if (_kbhit())
        {
            int key = _getch();

            if (key == 224) // 방향키 입력
            {
                key = _getch();

                switch (key)
                {
                case 72: // ↑
                    if (selected > 0)
                        selected--;
                    break;

                case 80: // ↓
                    if (selected < 4)
                        selected++;
                    break;

                case 75: // ← (회수)
                    if (stats[selected] > 0)
                    {
                        stats[selected]--;
                        remainPoint++;
                    }
                    break;

                case 77: // → (투자)
                    if (remainPoint > 0)
                    {
                        stats[selected]++;
                        remainPoint--;
                    }
                    break;
                }
            }
            else if (key == 13) // Enter
            {
                system("cls");
                printf("=== 최종 스탯 분배 결과 ===\n");
                for (int i = 0; i < 5; i++)
                    printf("%s : %d\n", statNames[i], stats[i]);
                printf("남은 포인트 : %d\n", remainPoint);
                printf("===========================\n");
                break;
            }
        }

        Sleep(75);
    }

    return 0;
}

void ShowStatus(int stats[], const char* names[], int selected, int remainPoint)
{
    printf("=== 스탯 분배 ===\n");
    printf("남은 포인트 : %d\n", remainPoint);
    printf("-----------------\n");

    for (int i = 0; i < 5; i++)
    {
        if (i == selected)
            printf("> %s : %d\n", names[i], stats[i]);
        else
            printf("  %s : %d\n", names[i], stats[i]);
    }
    printf("-----------------\n");
}
