// 던전을 입장하여 최하층 까지 내려가 클리어 하는 게임을 만들자.
// 이 게임의 목표
// 던전 10층까지 내려가 게임을 클리어할것.
// 플레이어의 기본적인 스테이터스를 제작한다.

#include "D_main.h"
#include "Player.h"
#include "Monster.h"
#include "Battle.h"

void PlayerSetting();
void EncounterMonster_DATA(int Encount, int Section);

int main()
{
	//srand((unsigned int)time(NULL));

	int Section = 1;
	int Encount = 1;
	
	const char* DungeonRoomText[10] = {
		"상승방","하강방","빈방","빈방","빈방","드롭방",
		"몬스터조우","몬스터조우","몬스터조우","몬스터조우"
	};

	EncounterMonster_DATA(Encount, Section);
	PlayerSetting();
	return 0;


}






// 몬스터 조우 예시
// void EncounterMonster(int* M_Count)
//{
//	*M_Count = (rand() % 5) + 1;
//	printf("몬스터 %d 마리를 만났습니다!\n", *M_Count);
//}

// 개발노트
/*
*  1. 플레이어를 기준으로 시작. 스텟, 장비(아이템), 능력치 등
*   ㄴ 타입문으로 사용할 능력치 연결
*   ㄴ 장비의 종류 고정화 > 검과 방패로 고정 (임시)
*	- 오류발생 : 연산자오류
*  2. 던전의 기초공사를 시작. 반복문을 통한 던전루프제작
*	ㄴ 층을 10층을 제작
*   ㄴ 10개의 방을 제작하고 4개의 몬스터방, 3개의 빈방, 
*		1개의 아이템루팅, 1개의 하강방, 1개의 상승방 제작
*	ㄴ 
*			
*
*/