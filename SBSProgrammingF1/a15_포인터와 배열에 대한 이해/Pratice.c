#include "Pratice.h";

void Test1()
{
	printf("\nTest1 예제 실습입니다.\n");

	const int* numarr[10];

	// 배열안에 있는 값을 반복문을 이용해서 0 - 0 , 1 - 1, 넣어주세요.

	for (int i = 0; i < 10; i++)
	{
		numarr[i] = i;
		printf("배열의 값 : %d\n", numarr[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		// 주소의 연산 방식으로 표현해보세요. // 역순으로 출력
		*(numarr + i) = (10-1)-i;
		printf("배열의 값 : %d\n", numarr[i]);
	}

}
void Test2()
{
	printf("\nTest2 예제 실습입니다.\n");

	const char* Group1[3] = { "a","b","c" };
	const char* Group2[3] = { "마을","도시","촌" };
	const char* Group3[3] = { "마법","전사","도적" };

	Func(Group1);
	
	// 배열을 인자로 받는 함수를 선언해보세요. 이름은 자유롭게 만들어보세요.
	// 또다른 배열의 주소를 가져오는 포인터를 선언해보세요.

	// Func(Group1);
	// Func(Group2);
	// Func(Group3);

}

void Func(const char* GroupArray[])  // Group1 > GroupArray > localGroupArray
{
	// const char* localGroupArray[] = GroupArray;

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", GroupArray[i]);
	}

}