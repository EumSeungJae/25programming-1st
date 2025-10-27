
#include <stdio.h>
#include "Meth.h"

// plus
void AddPlusFunction(int num1, int num2)  // 반환을 안하겠다.
{
	int result = num1 + num2;
	printf("두 수를 더한 값 : %d + %d = %d\n", num1, num2, result);
}

// minus
void minus(int num1, int num2)
{
	int result = num1 - num2;
	printf("두 수를 뺀 값 : %d - %d = %d\n", num1, num2, result);
}

// multiply
void multiply(int num1, int num2)
{
	int result = num1 * num2;
	printf("두 수를 곱한 값 : %d * %d = %d\n", num1, num2, result);
}
// divide
void divide(int num1, int num2)
{
	if (num2 == 0)
	{
		// (1) 코드를 더이상 실행하지 않고 종료해주세요.
		// (2) 뒤에 있는 값으로 반환한다.
		printf("0으로 나눌 수 없습니다.\n");
		return;
	}
	int result = num1 / num2;
	printf("두 수를 나눈 값 : %d / %d = %d\n", num1, num2, result);
}