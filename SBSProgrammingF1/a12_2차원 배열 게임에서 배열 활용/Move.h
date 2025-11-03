#pragma once
/*
void Keyboardmove()
{

    int x = 20;
    int y = 10;
    char player_char = 'O';

    while (1) {
        // 기존 위치의 문자를 지우기
        gotoxy(x, y);
        printf(" ");

        // 키 입력 처리
        if (_kbhit()) {
            int key = _getch();
            if (key == 224) { // 화살표 키 입력은 224가 먼저 입력됨
                key = _getch();
                switch (key) {
                case 72: // 위쪽 화살표
                    y--;
                    break;
                case 80: // 아래쪽 화살표
                    y++;
                    break;
                case 75: // 왼쪽 화살표
                    x--;
                    break;
                case 77: // 오른쪽 화살표
                    x++;
                    break;
                }
            }
        }

        // 새로운 위치에 플레이어 출력
        gotoxy(x, y);
        printf("%c", player_char);

        // 화면 깜빡임을 줄이기 위해 일정 시간 대기
        Sleep(50);
    }
}
*/