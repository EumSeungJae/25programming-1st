
// 포인터 공부 어떻게 하면 되나요?
// 1. 정의 > 무엇인가? 왜 써야하는가?
// 2. * , int* , *변수이름    // 각 연산자가 어떻게 쓰는가?
// 3. 포인터와 배열의 관계
// 4. 포인터를 매개변수로 사용하는 함수를 만들어보세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>


void PlayerControl()
{




}
void Updata()
{

}
void Render()
{

}
bool Quit()
{
	// 게임이 종료될 조건을 Bool 반환하는 실수로 만들어서
	int input = 0;
	scanf("%d", &input);
	if (input == 5)
	{
		return true;
	}
	else {
		return false;
	}
}

// Player 좌표 구조체. x값과 y값을 수정할 수 있게 만들어보세요.

typedef struct PlayerPos {
	int x;
	int y;
}PlayerPos;

int main()
{
	int input = 0;

	PlayerPos playerPos = { 2,4 };

	while (1) // 게임 루프
	{
		// 로직
		// 조작하는 함수 playerhandle, playercontrol
		// Update (갱신하다)
		// 렌더 (데이터 변경되면 그 것을 실행하라)

		// 플레이어의 이동.
		// scanf(); <<< breaking point 엔터키를 칠때까지

		unsigned char input = 0; // 화살표 224    -128 127



		if (_kbhit())
		{
			input = _getch();

			if (input == 224 || input == 0)
			{
				input = _getch();
				switch (input) {
				case 72:
					playerPos.y -= 1;
					printf("위에\n");
					break;
				case 80:

					printf("아래\n");
					break;

				}
			}
		}

		PlayerControl();
		Updata();
		Render();

		if (Quit())
		{
			break;
		}

	}
}