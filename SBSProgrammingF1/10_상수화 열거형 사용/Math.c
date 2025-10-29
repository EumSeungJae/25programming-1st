#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern const double PI;

//const static double PI;

// 어딘가에 파이라는 고정값이 있으니 찾아라.
void Test()
{
	double test = PI;
	printf("테스트 파이 값 : %lf\n", PI);
}

// static 함수 안에 선언하면 어떤 일이 발생하나요?
// 스택 영역과 별개로 데이터가 저장이 됩니다.
// 프로그램이 시작할 때 데이터가 저장이 됩니다.
// 지역 변수에 static을 선언하는 이유는 무엇인가요? >> 함수 안에서만 정적으로 사용하겠다.


void Test2()
{
	static int number = 1;
	int number2 = 1;
	number++;
	number2++;

	printf("number의 값 : %d , number2의 값 : %d \n", number, number2);
}

void CalculateCircleArea()
{
	//const double pi = 3.14;   
	// pi = pi - 0.14;  const 로 인해 사용불가능
	printf("반지름의 길이를 입력해주세요 : ");
	double radius;
	scanf("%lf", &radius);
	double circleArea = PI * radius * radius;
	printf("원의 넓이 : %lf\n", circleArea);

	// 원의 넓이가 2, 3, 4.5, 5.5 ......
}

void CalculateCircleDiameter()
{

	//const double pi = 3.14;

	printf("지름의 길이를 입력해주세요 : ");
	double radius;
	scanf("%lf", &radius);
	double circleDiameter = 2 * PI * radius;
	printf("원의 넓이 : %lf\n", circleDiameter);
}