/*
*  2025-10-19
* 
*/



//#include <iostream>
//#include <cmath>
//#include <windows.h> // 한글 콘솔 깨짐 방지용
#include <stdio.h>
// using namespace std;

// 경험치 이차함수: EXP(x) = -a*(x - 10)^2 + 15
/*
double expFunction(double x, double a) {
    double exp = -a * pow(x - 10, 2) + 15;
    if (exp < 0) exp = 0; // 음수 방지
    return exp;
}
*/

int expFunction(int a , int x) 
{   
    int Maxexp = -a * pow(x - 10, 2) + 15;
    if (Maxexp < 0) Maxexp = 0; // 음수 방지
    return Maxexp;
}


int main()
{
    // 한글 콘솔 깨짐 방지 (Visual Studio 전용)
    //SetConsoleOutputCP(65001); // UTF-8 출력
    //SetConsoleCP(65001);        // UTF-8 입력

    //double a = 0.2;   // 곡선의 가파름 (값이 클수록 급격히 감소)
    int a = 0.2;
    //double Nowexp = 0;   // 현재 경험치
    int Nowexp = 0;
    //double GetExp = 5;  // 얻는 경험치량
    int GetExp = 2;
    int MaxExp = 10;
    /// cout > printf 로 변경 // "<<" 를 () 및 = 으로 변경

    printf("==============================\n");
    printf("  이차함수 기반 경험치 시스템\n");
    printf("==============================\n\n");

    printf("최대 레벨: 10\n");
    printf("레벨 10까지 2의 경험치를 얻습니다..\n");
    printf("획득 경험치량: 2\n\n");

    // 레벨별 경험치 시뮬레이션
 
    for (int level = 1; level <= 10; level = 10) 
    {
        //double MaxExp = expFunction(level, a);
        int MaxExp = expFunction(level, a);

        if (level >=  1) MaxExp * 2;

        for (int NowExp = 2; NowExp = 5; NowExp++)
        { 

            if (Nowexp > MaxExp) Nowexp = MaxExp; // 최대 경험치 제한

            printf("Lv = %d |", level);                    /// 현재레벨
            printf(" %d 경험치 획득!", GetExp);
            printf(" | 현재 경험치: %d / %d !\n", Nowexp , MaxExp);             /// 현재경험치 : 경험치 최대치

            Nowexp = Nowexp + GetExp;
        }
        

        Nowexp = 0; // 예시용: 매 레벨마다 초기화 (게임에서는 누적 가능)
        GetExp + 1.5f;
    }

    printf("시뮬레이션 종료!\n");
    // system("pause");
    //return 0;
}