#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

/*
*  - 배열의 활용
*  - 2차원 배열
*  - 게임에서 적용
*/

// 플레이어 조작
// 

// 플레이어 : !
const char Player = '!';
// 몬스터   : @
const char Monster = '@';
// 돈       : $
const char Money = '$';
// 벽       : #
const char Wall = '#';

int PlayerX = 2;
int PlayerY = 4;

void Keyboardmove(int PlayerX, int PlayerY);
#define MAPSIZE 30
//const int MAPSIZE = 10;

// STAGE 뱔러 니늘랴먄 어떻게

int main()
{
	// Text 로 출력을 해야한다. >> 문자로 이루어져 있어야한다.

	int MonsterX = 7;
	int MonsterY = 7;

	// 총 10개의 char를 저장할 수 있는데 첫번째 데이터는 '!' 저장하겠다.
	char STAGE[MAPSIZE][MAPSIZE * 2] =
	{
		""
	};
	// 이중 반복문을 사용하여 맵을 세팅한다.
	for (int y = 0; y < MAPSIZE; y++)
	{
		for (int x = 0;x < MAPSIZE * 2;x++)
		{

			if (y == 0 || y == MAPSIZE - 1) // or 조건으로 표현하면 좋겟다
			{

				if (x == MAPSIZE * 2 - 1)
				{
					STAGE[y][x] = '\0';
				}
				else
				{
					STAGE[y][x] = Wall;
				}

			}
			else
			{
				if (x == MAPSIZE * 2 - 1)
				{
					STAGE[y][x] = '\0';
				}
				else if (x == 0 || x == MAPSIZE * 2 - 2)
				{
					STAGE[y][x] = Wall;
				}
				else
				{
					STAGE[y][x] = ' ';
				}
			}

		}
	}

	// 게임 로직. 5Frame 후에 몬스터가 x방향으로 1 움직였다. x+1

	// (3,5) 플레이어가 생성된다.
	
	STAGE[PlayerX][PlayerY] = Player;
	// (5,7) 돈이 생성된다.
	STAGE[4][6] = Money;
	// (8,8) 몬스터가 생성된다.
	MonsterX -= 6;
	STAGE[MonsterX][MonsterY] = Monster;
	// 세팅된 맵을 화면에 보이게 하라



	for (int h = 0; h < MAPSIZE; h++)
	{
		printf("%s\n", STAGE[h]);

	}

	///Initialize();
	///Setup();

	//while (1)
	//{
		// 게임이 실행되는 순서의 로직을 작성해야 한다.

		// 초기화 : 데이턱 없으면 기본 값으로 설정하고, 초기 값으로 설정한다.

		// 데이터가 변동 (게임 루프) Update

		///Update();
		///Render(); // 화면에 그려주세요.
		///Buffer(); // 포인터의 개념을 배워야 합니다.
	Keyboardmove(PlayerX, PlayerY);

	//}




	//printf("%s", STAGE);

}
void gotoxy(int PlayerX, int PlayerY) 
{
	COORD Pos = { PlayerX, PlayerY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void Keyboardmove(int PlayerX, int PlayerY)
{


	while (1) {
		// 기존 위치의 문자를 지우기
		gotoxy(PlayerX, PlayerY);
		printf(" ");

		// windows.h , kbhit()

		// 키 입력 처리
		if (_kbhit()) {
			int key = _getch();
			if (key == 224) { // 화살표 키 입력은 224가 먼저 입력됨
				key = _getch();
				switch (key) {
				case 72: // 위쪽 화살표
					PlayerY--;
					break;
				case 80: // 아래쪽 화살표
					PlayerY++;
					break;
				case 75: // 왼쪽 화살표
					PlayerX--;
					break;
				case 77: // 오른쪽 화살표
					PlayerX++;
					break;
				}
			}
		}

		// 새로운 위치에 플레이어 출력
		gotoxy(PlayerX, PlayerY);
		printf("%c", Player);

		// 화면 깜빡임을 줄이기 위해 일정 시간 대기
		Sleep(50);
	}
}