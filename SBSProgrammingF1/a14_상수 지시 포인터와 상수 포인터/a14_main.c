#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1. 포인터 복습
// int* num = &a; 포인터 선언 방식 자료형(*)
// *numPtr // 주소에 저장된 값을 역참조

void Test1();
void Test2();
void showplayerinventory();

int main()
{
	printf("Test1 예제 코드 구현\n");
	int playerX = 0;
	int playerY = 0;
	int* playerXPtr = &playerX;
	int* playerYPtr = &playerY;
	Test1(playerXPtr, playerYPtr, 2, 5);

	printf("playerX 값 : %d , playerY 값 : %d\n", playerX, playerY);

	// 상수 지시 포인터가 왜 문법적으로 존재하는가?
	const double pi = 3.14;
	double* piPtr = &pi;
	(*piPtr) = (*piPtr) + 2;
	printf("파이의 값 : %lf\n", pi);

	// 예제2. const int*로 선언된 포인터 변수는 그 값을 변경하지 못한다.
	int boxX = 10;
	const int* boxXPtr = &boxX;
	//(*boxXPtr)++;	  // 포인터에 저장되어 있는 값을 수정하지마세요. 상수 지시 포인터 const pointer

	// 예제3. 상수 포인터. 포인터(주소) 바뀌지 않는다.

	int* box2 = 5;
	boxXPtr = &box2;
	printf("boxXPtr가 가리키고 있는 값 : %d\n", boxXPtr);

	// 예제4. 함수에 상수 포인터 / 상수 지시 포인터를 직접 사용해보기
	// 배열을 하나 선언

	// intventory[0], [1], [2]
	// 44~50 다음 내용을 함수로 변경하여서, 원하는 위치에서 호출할 수 있게 만들어보세요.
	int inventory[3] = { 100,10,5 }; // 동전의 수, 레드 포션의 갯수, 약초의 수
	const char* inventoryText[3] = { "동전", "레드 포션", "약초" };

	for (int i = 0; i < 3;i++)
	{
		printf("%s : %d 개\n", inventoryText[i], inventory[i]);
	}

	int playerWallet = 100;
	// printf("플레이어의 현재 소유 금액 : %d\n", playerWallet);
	Test2(&playerWallet);

	inventory[0] += 100;
	inventory[1] -= 5;
	inventory[2] *= 2;

	showplayerinventory(inventory, inventoryText);


	// 그래서 포인터를 playerWallet

	// 실습 예제1
	// Test3 inventory. player1 인벤토리 player2인벤토리
	// player2가 현재 가지고 있는 인벤토리 데이터를 출력할 수 있게 만들어 보세요.
	
	int player2inventory[4] = { "1","1","5","3"};
	const char* Player2inventoryText[4] = { "단검","장검","횟불","약초"};
																 
	showplayerinventory(player2inventory, Player2inventoryText);


	// 실습 예제2
	// 플레이어의 소유한 데이터를 변경시키는 함수를 만들어 보세요.

	// 출력 -> 동전, 레드포션, 약초

}

// Test1 함수를 보고 이 함수가 어떤 목적으로 사용이 될 건지 분석
// 첫번째 요소 : 주소를 전달받음 : 주소를 이용해서 무엇을 할 것인가? 정수형 주소를 - 이름이 x 
// 주소에 저장되어 있는 값을 변경해서 사용하겠다. 5 -> amountX 더해서 이 더 한값으로 바꾸겠다.

void Test1(int* xPtr, int* yPtr, int amountX, int amountY)
{
	*xPtr = (*xPtr) + amountX;
	*yPtr = (*yPtr) + amountY;


}

void Test2(const int* const playerWallet)
{
	// 플레이어가 가지고 있는 돈을 출력해줘.

	int a = 10;



	printf("플레이어의 현재 소유 금액 : %d\n", *playerWallet);
}

void showplayerinventory(int inventoryCount[], const char* inventoryText[])
{
	// int inventoryCount[] = main함수에 있는 int 배열을 넣겠다. 주소를 넘기겠다.
	// const char* inventoryText[] =  main함수에 있는 const char* 배열을 넣겠다.

	for (int i = 0; i < 3; i++)
	{
		printf("%s  :  %d\n", inventoryText[i], inventoryCount[i]);
	}
	printf("\n");
}
					
void AddInventoryData(int* InventoryCount, int index, int amount)
{
	//첫번째 요소를 얼마만큼 증가시킬 것인가?
	InventoryCount[index] += amount;

}


