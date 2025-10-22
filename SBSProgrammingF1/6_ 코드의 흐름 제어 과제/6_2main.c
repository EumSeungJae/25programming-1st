
//#include "ChoiceAndPoint.h"

#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // _getch() 함수 사용을 위해 필요
#include <windows.h> // PlayerKeyBoardSelect() 함수 사용을 위해 필요
#include <time.h>   // 랜덤 시드 설정을 위해 필요

// 유저 값
int playerchoice = 0;
int playerpoint = 0;
const char* playercharacter = "";

// 컴퓨터 값
int computerchoice = 0;
int computerpoint = 0;
const char* computercharacter = "";

int Action = 0; // 결과갑 도출 1: 비김, 2: 플레이어 승리, 3: 컴퓨터 승리

//  목표 : 가위바위보 구조 설계

/*
*  1. 가위바위보 게임을 반복문과 조건문으로 구현
*  2. 플레이어와 컴퓨터의 점수를 누적시키기
*  3. 먼저 3점을 획득한 쪽이 승리
*  4. 플레이어가 선택한 결과를 저장
*     키보드 좌키 = 가위, 상키 = 바위, 우키 = 보
*     이후 확정확인 까지.
*  5. 컴퓨터가 랜덤으로 선택한 결과를 저장
*  6. 플레이어와 컴퓨터의 선택을 비교해서 승패를 결정
*  7. 플레이어와 컴퓨터의 점수를 출력
*/

void PlayerKeyBoardSelect()
{
	
	while (1)
	{


		// 키 입력 처리
		if (_kbhit()) 
		{
			int key = _getch();
			if (key == 224) // 화살표 키 입력은 224가 먼저 입력됨
			{ 
				key = _getch();

				if (key == 72)
				{
					playerchoice = 2;
					playercharacter = "바위";
					break;
				}
				else if (key == 75)
				{
					playerchoice = 1;
					playercharacter = "가위";
					break;
				}
				else if (key == 77)
				{
					playerchoice = 3;
					playercharacter = "보";
					break;

				}
			}
		}

	}
}
void ComputerRandomSelect()
{
	// 컴퓨터가 랜덤으로 선택한 결과를 저장
	computerchoice = (rand() % 3) + 1; // 1~3 사이의 랜덤 숫자 생성
	if (computerchoice == 1)
	{
		computercharacter = "가위";
	}
	else if (computerchoice == 2)
	{
		computercharacter = "바위";
	}
	else if (computerchoice == 3)
	{
		computercharacter = "보";
	}
}
void WinDecide()
{

	// 플레이어와 컴퓨터의 선택을 비교해서 승패를 결정
	if (playerchoice == computerchoice)
	{
		// 비김

		Action = 1;
	}
	else if ((playerchoice == 1 && computerchoice == 3) ||
		(playerchoice == 2 && computerchoice == 1) ||
		(playerchoice == 3 && computerchoice == 2))
	{
		// 플레이어 승리
		playerpoint+1;

		Action = 2;
	}
	else
	{
		// 컴퓨터 승리
		computerpoint+1;

		Action = 3;
	}
}
int main()
{
	srand((unsigned int)time(NULL)); // 랜덤 시드
	
		printf("=== 가위바위보 게임 ===\n");
		printf("1. 가위 (←)\n2. 바위 (↑)\n3. 보 (→)\n");
		printf("=== 설명 ===\n");
		printf("컴퓨터는 랜덤 결과를 냅니다.\n");
		printf("이길 때마다 1점을 얻습니다.\n");
		printf("3점을 먼저 얻는 쪽이 승리합니다.\n");
		printf("======================\n");
		printf("선택 :  ");

	int Round = 1;
	// for문으로 라운드 반복
	// 조건 : 플레이어 또는 컴퓨터가 3점에 도달할 때까지 반복
	for (Round = 1; playerpoint < 3 && computerpoint < 3; Round++);
	{
		//system("cls"); // 화면 정리


		printf("%s\n", playercharacter);

		PlayerKeyBoardSelect();
		ComputerRandomSelect();
		WinDecide();

		printf("  ====================== \n");
		printf("플레이어의 선택 : %s  /  컴퓨터의 선택 :  %s\n", playercharacter, computercharacter);
		printf("점수수코어 - 플레이어 %d : %d 컴퓨터\n", playerpoint, computerpoint);
		
		if (Action == 1)
		
			printf("비겼습니다.\n");
		
		else if (Action == 2)
		
			printf("플레이어가 승리했습니다.\n");
		
		else if (Action == 3)
		
			printf("컴퓨터가 승리했습니다.\n");
		

		printf("  ====================== \n");

		printf("\n계속하려면 아무거나 누르세요...");
		_getch(); // 결과 확인 후 진행

	}
}