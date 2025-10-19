#include <stdio.h>
#include <math.h>
#include <windows.h> // 콘솔 한글 깨짐 방지용

// 경험치 이차함수: EXP(x) = -a*(x - 10)^2 + 15
// 보너스 경험치 계산용 (정수 반환)
int expFunction(int level, double a)  /// 레벨업에 따른 보너스조정률 x = level 
{   
    /// 경험치 보너스 계산
	/// 현재경험치 = -굴곡점 * (레벨 - 10)^2 + 획득가능한 최대경험치   
    double exp = -a * pow(level - 10, 2) + 30;
    if (exp < 0) exp = 0;
    return (int)(exp + 0.5); // 반올림 후 정수로 변환
}

// 레벨업에 필요한 경험치 계산 함수
int getExpToLevelUp(int level) 
{
    return 12 + (level - 1) * 3; // ✅ 레벨이 높을수록 필요 경험치 증가
}

int main() 
{
    
    double a = 0.2;      // 곡선의 가파름
    int exp = 0;         // 현재 경험치
    int gain = 2;        // 행동당 얻는 경험치
    int level = 1;
    const int MAX_LEVEL = 10;

    printf("==============================\n");
    printf("   이차함수 기반 경험치 시스템 (정수 + 난이도 상승)\n");
    printf("==============================\n\n");
    printf("행동당 기본 경험치: %d\n", gain);
    printf("최대 레벨: %d\n", MAX_LEVEL);
    printf("레벨 10 근처에서 보너스 경험치가 최대입니다.\n\n");

    // 게임 루프
    /// for (초기식; 조건식; 증강식);
	///  { 반복 실행 구간 }
	/// 초기식: 변수를 처음 선언하고 초기화하는 부분
	/// 조건식 : 반복문이 계속 실행될지 여부를 결정하는 부분
	/// 증강식 : 반복문이 한 번 실행된 후에 수행되는 부분
    for (int turn = 1; level <= MAX_LEVEL; turn++) 
    {
        int expToLevelUp = getExpToLevelUp(level); // 현재 레벨에서 필요한 경험치
        int bonus = expFunction(level, a);         // 보너스 계산
        int totalGain = gain + bonus / 10;         // 실제 얻는 경험치

		/// 경험치 획득
        exp += totalGain;
        
		/// 현재 상태 출력
        printf("[턴 %2d] Lv %2d | 획득 경험치: +%d | 누적 경험치: %d / %d\n",
            turn, level, totalGain, exp, expToLevelUp);

        // 레벨업 처리
		/// if (조건식) { 실행 구문 }
		/// 조건식이 참일 때 실행 구문을 수행
		/// 조건식 : exp >= expToLevelUp
        
        if (exp >= expToLevelUp) 
		{   /// 레벨업 시 경험치 차감 및 레벨 증가
            exp -= expToLevelUp;
			///  레벨 증가
            level++;
			/// 최대 레벨 도달 시 종료
            if (level > MAX_LEVEL) 
            {
                printf(" 최대 레벨(%d)에 도달했습니다!\n", MAX_LEVEL);
                break;
            }
            printf(" 레벨업! 현재 레벨: %d (다음 레벨업에 필요한 경험치: %d)\n\n",
                level, getExpToLevelUp(level));
        }
    }

    printf("\n시뮬레이션 종료.\n");
    system("pause");
    return 0;
}