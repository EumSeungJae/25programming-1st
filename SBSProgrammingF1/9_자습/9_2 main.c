/*
*  자습목표
*  레벨에 기반하여 스테이터스에 따른 성장값을 만들자
*  레벨 1당 스테이터스는 5가 증가한다.
*  스테이터스 각 한계 수치는 255다.
*  증가하는 스테이터스는 STR, INT, VIT, AGI, DEX 가있다.
*  스테이터스에 기반하여 오르는 능력치는 공격력, 마법공격력, 체력, 방어력, 마법방어력, 공격속도, 명중률, 캐스팅속도가있다. 
*  초기 스테이터스 포인트로 20이 지급된다.
*  스테이터스 포인트가 총합 502가 되었을때 스테이터스 각 한계가 510까지 풀린다.
*  
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 시스템 설명 코딩

// 레벨시스템
// 레벨증가 및 경험치증가

void LevelUpSystem()
{
	// 반복되는 레벨링 (임시 레벨제한 200)
	// 경험치 생성 (임시 랜덤값으로 제작)
	// 필요 경험치 증가코드도 추가

	// 레벨업시 새로운 스텟포인트 증가 +5

	
}

// 스테이터스 배분코딩
// scanf(); 를 통해서? _getch(); 를 통해서? 어디에 저장할까? 각 스테이터스는 255의 제한이 걸린다.

void StetDivision()
{
	// 스테이터스를 지급하는 코딩

	// 지급후 저장
}

// 스테이터스에 따른 능력치 증가코딩
// 예시 ) STR 1 = 공격력 + 5 / 공격속도 + 2, VIT 4 = 체력 + 100/ 방어력 + 10, AGI 4 = 공격속도 + 50 / 회피률 + 2. DEX 3 = 공격력 2 / 명중률 +1 
void StatWindowlayer()
{
	// 스테이터스 분배후 능력치 결산 코딩

	
}


// 스테이터스 한계돌파 코딩
// 스테이터스 총합 502가 되면 스테이터스의 한계가 풀린다.
void StatIncrease()
{
	// 스텟포인트 총합이 502가 되면 각 스테이터스 제한을 510까지 늘린다. 
}

// 메인코딩
int main()
{
	int Level = 1;
	int STR = 1;
	int INT = 1;
	int VIT = 1;
	int AGI = 1;
	int DEX = 1;

	int BaseStetPoint = 20;
	int NewStetPoint = 0;
	int StetPoint = BaseStetPoint + NewStetPoint;
	
	LevelUpSystem(Level, STR, INT, VIT, AGI, DEX);
}


/*
*  2025-10-28 스텟분배 구상설정
*/