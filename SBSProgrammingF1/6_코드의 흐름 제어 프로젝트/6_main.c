//    날짜  : 2025-10-22
// 학습목표 : 코드의 흐름 제어

// 가위 바위 보
// 실습 목표 : 다른 미니 게임 직접 설계하고 코드를 작성해보는 것

#include <stdio.h>
#include <stdbool.h>

// (1) 가위 바위 보 게임을 한글로 표현해보자
// - 유저, 컴퓨터,
// 가위, 바위, 보 중에서 하나를 선택해주세요.
// 결과 : 컴퓨터가 무엇을 냈는가 따라서 결과가 달라진다.

// 프로그램 혼자서 작성할 때 권장하는 순서
// 1. 한글로 먼저 어떤것을 구현할지 주석으로 표현해보세요.
// 2. 한글로 표현한 내용을 컴퓨터에게 어떻게 명령할지 직접 작성을 해보세요.
// 2-1. 특별한 문법, 헤더를 가져와서 사용한다, 오류가 나는 부분
// 2-2. 출력을 해서 결과를 성공시켜보기

/*
* 반복해서 사용하고 싶다. - 반복문
* 왜 반복문을 쓰고싶은가? 점수를 표현?
* 유저승리시 1점 누적
* 컴퓨터가승리시 1점 누적
* 플레이어의 점수 vs 컴퓨터의 점수 출력
*/

/*
* 점수를 표현해보세요. 유저가 승리하면 유저의 점수 1점 증가시키고 컴퓨터가 승리하면 컴퓨터의 점수를 1점 증가시키세요
* 
* 버그가 있는 것 같다. 컴퓨터가 무엇을 냈는지 알고 싶다. < 반영. 컴퓨터와 플레이어의 행동을 출력하는 코드를 만들어보세요.
* hint > playereChoice, ComputereChoice 무엇
*/

/*
*  가위바위보게임을 완성하기 위해 필요한 구현 사항
*  1. 유저의 입력 기능이 없다.
*  2. 컴퓨터가 정해진 결과만 출력합니다. > 랜덤
*  3. 스코어. > => 반복. 3점 먼저 취득하면 승리한다.
* 
*  앞으로 남은 작업 리스트
*  > 당장 구현할 수 있는 순위
*  4.
*  5.
*  6.
*  7.

*/


int main()
{
	// 조건문 출력 테스트
	// 세미클론 명령이 끝이 났다.
	bool value = 5 < 3;	// 참이면 value  숫자가 0이면 조건이 거짓이다.

	// if(); 세미클론을 넣지마세요

	if (true)
	{
		//실행할 내용
		printf("조건이 실행되었다!\n");

	}
	

	printf("가위 바위 보 게임!\n");





	// 플레이어가 선택한 결과를 저장
	// 1. 가위 2. 바위 3. 보 (임의의 약속)
	int	PlayerChoice = 1;    // 플레이어는 가위를 선택했습니다.
	int ComputerChoice = 2;  // 컴퓨터도 가위를 선택했습니다.

	int PlayerePoint = 0;     // 플레이어 누적 승리점수
	int ComputerPoint = 0;	  // 컴퓨터 누적 승리점수

	// 가위 -> 이겼다, 비겼다, 졌다.
	// 조건 - 가위 -> 보  "1" -> "3"
	// 조건 - 가위 -> 가위 "1" -> "1"
	// 조건 - 가위 -> 바위 "1" -> "2"
	// playere 1 choice	1은3을 이긴다, 1은1과 비긴다, 1은 2에게 진다.
	if (PlayerChoice == 1 && ComputerChoice == 3)
	{
		// 실제로 유저의 점수를 1점 증가시키는 것 > playerePoint
		PlayerePoint = PlayerePoint + 1;
		printf("유저가 승리했습니다.\n");
	}
	else if (PlayerChoice == 1 && ComputerChoice == 1)
	{
		printf("유저가 비겼습니다.\n");
	}
	else if (PlayerChoice == 1 && ComputerChoice == 2)
	{
		ComputerPoint = ComputerPoint + 1;
		printf("유저가 패배했습니다.\n");
	}
	else
	{
		//ComputerChoice값이 0보다 작거나 같거나, 3보다 큰 경우
		if(ComputerChoice <=0 && ComputerChoice > 3)
		printf("예상하지 못한 결과가 발생했습니다.\n");
	}

	// playere 2 choice	2는 1에게 이긴다, 2는 2와 비긴다, 2는 3에게 진다.
	if (PlayerChoice == 2 && ComputerChoice == 1)
	{
		PlayerePoint = PlayerePoint + 1;
		printf("유저가 승리했습니다.\n");
	}
	else if (PlayerChoice == 2 && ComputerChoice == 2)
	{
		printf("유저가 비겼습니다.\n");
	}
	else if (PlayerChoice == 2 && ComputerChoice == 3)
	{
		ComputerPoint = ComputerPoint + 1;
		printf("유저가 패배했습니다.\n");
	}
	else
	{
		if (ComputerChoice <= 0 && ComputerChoice > 3)
		printf("예상하지 못한 결과가 발생했습니다.\n");
	}

	// playere 3 choice
	if (PlayerChoice == 3 && ComputerChoice == 2)
	{
		PlayerePoint = PlayerePoint + 1;
		printf("유저가 승리했습니다.\n");
	}
	else if (PlayerChoice == 3 && ComputerChoice == 3)
	{
		printf("유저가 비겼습니다.\n");
	}
	else if (PlayerChoice == 3 && ComputerChoice == 1)
	{
		ComputerPoint = ComputerPoint + 1;
		printf("유저가 패배했습니다.\n");
	}
	else
	{
		if (ComputerChoice <= 0 && ComputerChoice > 3)
		printf("예상하지 못한 결과가 발생했습니다.\n");
	}

	// 플레이어가 바위냈을때

	// 플레이어가 보를냈을때

	// 플레이어의 점수 vs 컴퓨터의 점수 출력

	// printf();
	// 숫자를 한글로 변환
	const char* PlayereCharacter = "가위";
	const char* ComputerCharacter = "보";


	if (PlayerChoice == 1)
	{
		PlayereCharacter = "가위";
	}
	else if (PlayerChoice == 2)
	{
		PlayereCharacter = "바위";
	}
	else if (PlayereCharacter == 3)
	{
		PlayereCharacter = "보";
	}
	
	if (PlayerChoice == 3 && 2)
	{
		printf("출력\n");

	}
	

	// 플레이어의 선택 : 가위, 컴퓨터의 선택 : ? 출력
		printf("플레이어의 선택 : %s  /  컴퓨터의 선택 :  %s\n", PlayereCharacter, ComputerCharacter);

	// 점수수코어 플레이어와 컴퓨터 비교
	printf("점수수코어 - 플레이어 %d : %d 컴퓨터", PlayerePoint, ComputerPoint);

	// 1 가위 2 바위 3 보
	// 1 : 1   2
	// 1 : 2   3
	// 1 : 3   4
	// 2 : 1   3
	// 2 : 2   4
	// 2 : 3   5
	// 3 : 1   4
	// 3 : 2
	// 3 : 3
}




