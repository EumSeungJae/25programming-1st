/*
*   날짜   : 2025-10-20
* 학습목표 : 헤더 파일을 생성하고 링킹 과정을 이해한다.
*/

#include <stdio.h>	  // 이름으로 생각. include : 포함하다. std + i + o .h
#include "Gameinfo.h" 
#include "4_main.h"

// #include <stdlib.h>
// #include <conio.h> // _kbhit(), _getch() 함수 사용을 위해 필요
// #include <windows.h> // SetConsoleCursorPosition() 함수 사용을 위해 필요
 

// 표준 입출력의 머리 정보가 담겨있는 코드를 포함하세요.
// #include	헤더를 명시해줘야한다.
// 전처리기 : 프로그램이 시작되기전에 실행하라.
// why? 프로그래밍 언어 - (CPU - 명령)
// 컴퓨터 어딘가에 설치되어 있는 Windows kit 생성된 코드를 가져와서 사용하고 싶다.
// Copy Paste 복사 붙여넣기.

// 컴퓨터에게 입력을 받는 코드가 필요하다. => 구현해놓은 헤더파일을 참조해야겠구나.
// 컴퓨터에게 입력을 감지하는 코드가 필요하다 -> AI 코드를 작성. #include <> ...

/*
*  #include <이름.h>  : 시스템 폴더에서 파일을 찾는다.
*  #include "이름.h"  :	프로젝트 안에서 파일을 찾는다.					   
*/

// 키보드 방향키를 이용해서 콘솔창에서 특정한 문자가 움직이는
// (캐릭터 이동) 코드를 AI 구글링 이용해서 실행가능하게 작성
// Google, AI모드, C언어, 콘솔게임으로, 구체적인 설명을 입력해주세요 (화살표 상하좌우)

/*
// 콘솔 커서 위치를 이동시키는 함수
void gotoxy(int x, int y) {
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
*/

/*
*  진입점에 main 헤더와 간략한 실행 함수만 보이게 작성해보세요.
*  int main
*  Update()                 정보갱신
*  Rendering()              
*  Buffer()
*/

int main()					   // 프로그램의 시작을 알리고, 닫힌 중괄호 만나면 프로그램이 종료된다.
{
    Keyboardmove();            // 프로그램이 어떻게 실행이 되는지 분할하는 것이 좋다.

    return 0;

}

