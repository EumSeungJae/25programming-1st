#pragma once

// 키보드의 입력을 받는데 필요한 헤더		       - 구현하기 위해 필요한 헤더들
// 헤더를 나누는 이유는 무엇일까?
// 특정 코드 기능들이 구현된 내용을 가져오는 것

// 스코어 기능
// 스코어 기능에 필요한 기능 작성한다.

// 버그가 발생했다. 스코어 기능 버그. -> 스코어 코드 작성한 부분을 확인.
// 소스 코드. 빌드 실행가능한 코드로 변환합니다.
// 소스 파일마다 object 생성해서 최종적으로 결합을 한다. 빌드시간에 낭비가 발생을 한다.
 
// 다음과 같은 코드들이 존재한다. 이 코드를 참조해서 넘겨줘라. 모든 코드를 넘길필요가없다.
// h파일과 c파일을 나누어서. h파일만 전달한다. c파일에 다가 작성한다.

#include <stdlib.h>
#include <conio.h> // _kbhit(), _getch() 함수 사용을 위해 필요
#include <windows.h> // SetConsoleCursorPosition() 함수 사용을 위해 필요

void gotoxy(int x, int y);



// 총을 발사하는 게임을 만든다.

int bulletMaxCount = 8;
float fireRate = 0.2f;