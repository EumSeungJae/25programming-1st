


/*
void seletWeapon(int TypeNumber[], const char* TypeName[], int selected, int Choice)
{
    const char* WeaponText[4] = { "대검","한손검","활","지팡이" };
    const int* WeaponType[4] = { 0,1,2,3 };
    int WeaponChoice = 1;

    while (1)
    {
        system("cls");
        seletWeapon(WeaponType, WeaponText, selected);
        printf("↑↓ : 이동 | ←→ : 조정 | Enter : 확정\n");

        if (_kbhit())
        {
            int key = _getch();

            if (key == 224) // 방향키 입력
            {
                key = _getch();

                switch (key)
                {
                case 72: // ↑
                    if (selected > 0)
                        selected--;
                    break;

                case 80: // ↓
                    if (selected < 4)
                        selected++;
                    break;

                case 75: // ← (회수)
                    if (WeaponType[selected] > 0)
                    {
                        WeaponType[selected]--;
                        WeaponChoice++;
                    }
                    break;

                case 77: // → (투자)
                    if (WeaponChoice > 1)
                    {
                        WeaponType[selected]++;
                        WeaponChoice--;
                    }
                    break;
                }
            }
            else if (key == 13) // Enter
            {
                system("cls");
                printf("=== 장비 선택 결과 ===\n");
                for (int i = 0; i = )
                    for (int i = 0; i < 5; i++)
                        printf("%s : %d\n", statNames[i], stats[i]);
                printf("남은 포인트 : %d\n", remainPoint);
                printf("===========================\n");
                printf("= 사용장비 선택으로 넘어갑니다.=\n");
                break;
                _getch();
            }
        }

        Sleep(100);
    }
    printf("=== 장비 선택 ===\n");
    printf("선택 장비 : %d\n", );

}
*/