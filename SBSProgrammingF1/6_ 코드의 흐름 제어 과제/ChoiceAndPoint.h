
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h> // _kbhit(), _getch() 함수 사용을 위해 필요
#include <windows.h> // PlayerKeyBoardSelect() 함수 사용을 위해 필요

// 유저 값
int playerchoice = 0;
int playerpoint = 0;
const char* playercharacter = "";

// 컴퓨터 값
int computerchoice = 0;
int computerpoint = 0;
const char* computercharacter = "";

int Action = 0; // 결과갑 도출 1: 비김, 2: 플레이어 승리, 3: 컴퓨터 승리
//void SelectDecide()

/*
void PlayerKeyBoardSelect()
{
    // 기존 위치의 문자를 지우기
    //int x = 0;
    //int y = 4;
    //gotoxy(x, y);
    //printf("선택 : %s", playercharacter);
    while (1)
    {


        // 키 입력 처리
        if (_kbhit()) {
            int key = _getch();
            if (key == 224) { // 화살표 키 입력은 224가 먼저 입력됨
                key = _getch();
                switch (key) {
                case 72: // 위쪽 화살표
					playerchoice = 2;
                    playercharacter = "바위";
                    break;
                case 80: // 아래쪽 화살표
                    // 결과도출

                    break;
                case 75: // 왼쪽 화살표
					playerchoice = 1;
                    playercharacter = "가위";
                    break;
                case 77: // 오른쪽 화살표
					playerchoice = 3;
                    playercharacter = "보";
                    break;
                }
            }
        }
    }
}
*/
/*
void ComputerRandomSelect()
{
    // 컴퓨터가 랜덤으로 선택한 결과를 저장
	// 1. 가위 2. 바위 3. 보 (임의의 약속)
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
*/
/* void WinDecide()
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
        playerpoint++;
        
        Action = 2;
    }
    else
    {
        // 컴퓨터 승리
        computerpoint++;

		Action = 3;
	}
}
*/