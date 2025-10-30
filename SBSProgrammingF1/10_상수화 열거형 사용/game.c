#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

void CalculateBoundaryX();
void CalculateBoundaryY();

bool CheckPlayerIsBoundary()
{
	int mapX = CalculateBoundaryX(0);
	int mapY = CalculateBoundaryY(0);
	int playerX = 3;
	int playerY = 5;

	// 조건문으로 범위안인가 아닌가 체크해보세요

	if ((playerX >= 0 && playerX < mapX)
		&& (playerY >= 0 && playerY > mapY))
	{
		printf("플레이어가 경계선 안에 있습니다.\n");
		return;
	}
	else
	{
		printf("플레이어가 경계선 안에 없습니다.");

	}
}


void CalculateBoundaryX(int MapOriginX)
{
	MapOriginX;

}

void CalculateBoundaryY(int MapOriginY)
{
	MapOriginY;
}