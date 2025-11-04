
#include "Pratice.h"



int main()
{
	printf("1. 포인터 복습\n");

	// 포인터 변수를 선언해보세요. 정수형(int)
	// 정수 값의 주소를 저장해보세요. 주소연산자 사용
	// 포인터 변수로 부터 값을 가져와서 출력해보세요. 역참조 연산

	int num = 10;
	int* numPtr = &num; // 정수형 4바이트 주소를 저장하는 변수주소
	
	printf("포인터 변수의 역참조 값 : %d\n", *numPtr);

	// 주소에 대한 이해
	// 데이터를 저장을 한다.
	// 주소의 시작점을 기준으로 자료형에 정의된 범위만큼 정해진 방식으로 읽는다.

	// pointer*
	// int* : 주소 ? 시작 주소. 4바이트

	printf("numPtr의 값 : %p\n", numPtr);
	float num2 = 0.2;
	float* num2Ptr = &num2;

	numPtr = num2Ptr;
	printf("numPtr 현재 주소로 부터 읽은 값 : %d\n", *numPtr);

	// num3 = 10; // 정의되어 있지 않았다.

	printf("2. 포인터와 배열 \n");

	int numarr[5] = { 0,1,1,1,1 }; // 시작 주소 4바이트. 읽겠다. 5개 = 4 * 5 = 20

	printf("numarr의 바이트 크기 : %d\n", sizeof(numarr));
	printf("numarr의 시작 주소 : %p\n", numarr);

	numarr[2] = 1;
	*(numarr + 3) = 2;    // lvalue가 수정할 수 있습니다.(?)

	// numarr[1] 표현식은 *(numarr + 1) 내용을 자동으로 처리해주고 있다.

	printf("num[1]의 값 : %d\n", numarr[1]);
	
	// 배열의 크기를 증가시키고 싶습니다.

	printf("2. 배열과 상수 포인터 \n");

	// 배열은 포인터다.
	const char* const itemText[3] = { "홍차","녹차","커피" };

	//itemText[0] = "말차";
	printf("itemText0 : %s\n", itemText[0]);
	printf("itemText1 : %s\n", itemText[1]);
	printf("itemText2 : %s\n", itemText[2]);


	printf("포인터의 크기 %d\n", sizeof(char*));  // 4바이트 => 메모리 주소 4바이트 공간만 사용하겠다. 8바이트 운영체제에서 4바이트 게임 돌리면 안돌아간다.

	// 배열은 기본적으로 상수 포인터 : 주소를 변경하지 못하는 포인터다.
	// 저장할 수 있는 자료형을 상수형으로 표현했다.
	
	
	Test1();

	Test2();

}