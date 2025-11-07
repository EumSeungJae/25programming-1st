
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "17_main.h"

// 컴퓨터에게 명령을 내리기 위해서다.       *포인터까지의 개념*
// 숫자만 읽을 수 있다. 
// 자료형 변수. 정수(1,2,4), 실수(4,8)
// 메모리 안에 저장이 되어있다. 시작 주소를 알려주는 문법, 포인터.

// 플레이어의 좌표 : int자료형 2개 저장할 수 있게 만들고 싶다.

typedef struct EntityPos {
	int x;
	int y;
}EntityPos;

typedef struct BattleEntity {

	int HP;
	int Melee_ATK;
	int Magic_ATK;
	int P_Def;
	int M_Def;

}BattleEntity;

typedef struct Player {
	EntityPos pos;
	BattleEntity battleEntity;

}Player;

// enemy 구조체를 직접 선언해보세요. enemy 죽었을 때 주는 보상 Rewerd
typedef struct AllStetus {
	int HP;
	int STR;
	int INT;
	int VIT;
	int AGI;
	int DEX;
}A_Stetus;

typedef struct Monster_Orc {
	A_Stetus Orc_Stetus;
	EntityPos Orc_Pos;
	int DropItem;
}M_Orc;

void PrintPos(Player player);
void Orc_DATA(M_Orc Orc1);

int main(Player player)
{
	// 배열 : 같은 타입의 자료형을 배열을 사용해서 표현할 수 있다.
	// 주소 한개로 어떻게 1~n?>
	// 배열을 포인터로 어떻게 설명할 수 있을까? 표현할 수 있을까?(상수포인터)

	// 구조체, 자료형 선언, 포인터, 배열
	
	// 구조체 what? why? 
	// 사용자 정의 자료형 user Defined Type > typedef 
	// x좌표, y좌표
	
	printf("구조체 사용 이유\n");
	//int x = 0;
	//int y = 0;

	
	Player player1 = { {2,4},{1,1,1,1,1} }; // 초기화(Initialize)
	PrintPos(player1);
	
	BattleEntity battleentity = { 1,2,3,4,5 };

	M_Orc Orc1 = { 
		{100,60,0,80,20,30},
		{5,6},
		1 
	};
	Orc_DATA(Orc1);
	M_Orc Orc2 = {
		{120,60,0,80,30,50},
		{8.3},
		1
	};
	Orc_DATA(Orc2);

	// 플레이어, 몬스터(enemy,monster)

	printf("구조체 포인터 사용이유\n");

	printf("구조체의 크기 : %d\n", sizeof(Player*));

	// 기능을 확장하기 위해서 Playter에 구조체를 계속 추가한다.
	// 예를 들어 Economy, Battle, ...craft...

}



void PrintPos(Player player)
{
	printf("플레이어의 현재 위치 : [%d,%d]\n", player.pos.x, player.pos.y);
}

void Orc_DATA(M_Orc Orc1)
{
	//M_Orc Orc_Stetus = {100,60,0,80,20,30};
	printf("오크의 체력 : %d\n",Orc1.Orc_Stetus.HP);
	printf("오크의 STR : %d\n",Orc1.Orc_Stetus.STR);
	printf("오크의 INT : %d\n",Orc1.Orc_Stetus.INT);
	printf("오크의 VIT : %d\n",Orc1.Orc_Stetus.VIT);
	printf("오크의 AGI : %d\n",Orc1.Orc_Stetus.AGI);
	printf("오크의 DEX : %d\n",Orc1.Orc_Stetus.DEX);
	printf("오크의 위치 : %d , %d\n",Orc1.Orc_Pos.x,Orc1.Orc_Pos.y);

}