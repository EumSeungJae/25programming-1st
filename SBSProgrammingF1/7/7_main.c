/*
* 학습 목표 : for반복문과 while반복문의 문법 이해하기
* 실습 목표 : 지난 시간에 구현했던 코드를 반복문으로 표현하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
/*
*  가위 바위 보
*  가위 바위 보 로직을 반복문으로 감싸는 작업하기.
*/


int main()
{
	// 반복할 수 있는 획수를 직접 입력 받아서 사용하기
	// scanf (C언어에서 사용하는 방식)
	//  C++ 입력 받는 함수
	// Csharp. py. java.... Unreal, Unity


	// 1. for 반복문

	int EngNum = 97;  // 'a' 의 아스키(%c) 코드 값
	int loopcount = 10;
	printf("반복할 횟수를 작성해주세요 : ");

	scanf("%d", &loopcount);  // loopcount  주소 몇칸 어떻게 저장되어있다.


	for (int i = 0; i < loopcount; i++) // ++ = 1 증가 / i = i + 2 = 2 증가
	{
		printf("%c", EngNum);    // abcdefgh---
		EngNum = EngNum + 1;        // printf("%c", add); 가 먼저 실행후 add 가 증가 +1
		printf("%d ", i);
	}

	// 0 ~ 9 [ 10 ] 반복하고 싶은 숫자로 바꾸어보세요
	// 반복문 안의 내용을 작성해보세요 : a0 ~ a29  a0 b1 c2 d3 ...
	// 변수를 사용해보세요.

	// 2. while 반복문
	// while (반복할 조건 참이면) 중괄호안의 코드를 실행하라.

	printf("\n\n    while 반복문    \n\n");

	int EngNum2 = 97;
	int j = 0;

	while (j <= loopcount) // 1== true, 
	{
		printf("%c", EngNum2 + j);    // abcdefgh---
		printf("%d ", j);
		j++;
	}

	printf("\n");
	EngNum2 = 97;
	j = 0;

	while (j <= loopcount) // 1== true, 
	{
		printf("%c", EngNum2 + j);    // abcdefgh---
		printf("%d ", j);
		j++;

		if (j >= loopcount)
		{
			break;  // while, swith 반복문 탈출
		}

	}

	// 랜덤 숫자 출력
	srand((unsigned int)time(NULL)); // 난수 생성기 초기화
	int randomValue = rand() % 100 + 1;  // 1 ~ 100 출력
	printf("랜덤 값 : %d \n", randomValue);

}