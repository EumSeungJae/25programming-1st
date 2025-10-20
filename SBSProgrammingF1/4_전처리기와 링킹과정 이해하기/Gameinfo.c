

#include "Gameinfo.h"

// 콘솔 커서 위치를 이동시키는 함수
void gotoxy(int x, int y) {
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}