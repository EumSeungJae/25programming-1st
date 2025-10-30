
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 어떤 점이 장점이 되는가?
// 기존 방식, 새로운 방식 둘다 사용.
// obsolete : 더이상 쓸모가 없어져서 지원을 안하겠다.
// 이 코드를 사용하면 경고가 뜨면, 이거 이제 지원 안해줄거야 새로운 문법써

// 반복문.

// 중괄호는 영역을 표현하는 녀석
// 함수 헤더() => {    };
// 자료형 int x 100개 {    }

int main()
{
	// 반복적으로 사용되는 자료형을 배열로 표현한다. 코드를 개선하기 위함.
	// 배열 사용 1
	int a = 0, b = 0, c = 0, d = 0, e = 0;

	int numArray[] = { 0, 1, 2, 3 };
	printf("값 : %d\n", numArray[0]);
	printf("4번째 값 : %d\n", numArray[1]);


	for (int i = 0; i < 4; i++)
	{
		printf("%d번째값 : %d\n)", i, numArray[i]);

	}

	// 배열 사용 2

	int numArray2[100]; // int형 자료형이 100개 저장될 수 있는 공갼을 선택한다.
	// int형 배열의 크기가 100인 녀석이다.

	int numArray3[40] = { 0,1,2,3 };

	// sizeof(변수의 이름) -> 바이트의 크기를 반환해줍니다.

	printf("a의 크기 : %llu 바이트\n", sizeof(a));
	printf("numArray2의 크기 : %llu 자료형의 수\n", sizeof(numArray) / sizeof(int));
	printf("numArray2의 크기 : %llu 바이트\n", sizeof(numArray2));
	printf("numArray3의 크기 : %llu 바이트\n", sizeof(numArray3));


	// 배열을 선언하는 방법
	// 자료형 이름[ ] = { };
	// 자료형 이름[숫자] = { }; 갯수가 안맞는 경우
	// 자료형 이름[숫자];

	// Question : 100개의 배열을 선언. sizeof(배열의 이름) vs sizeof(배열의 원소) 결과값이 400,
	// 4 그 이유가 무엇일까? 같은 타입을 몇개 선언을 해서 어디까지 저장할수 있다.
	// 배열의 원소 : 배열 특정 위치에 있는 크기를 출력 => 4
	// 어떤 숫자있을지 장담을 못해요. 그 메모리 주소를 접근은 할 수 있습니다.


	// 문자를 직접 표현.
	// 플레이어의 이름 : 설정
	// 플레이어 이름을 저장할 수 있는 공간을 만들고, 이 공간에 입력받은 데이터를 저장하고 싶다.

	//int a; scanf(&a);
	//char c; svanf(&c);  // 문자 기호 하나만 표현. ㄱ ㅏ나다라마바사


	char c1 = 'h';
	char c2 = 'i';
	printf("%c%c\n", c1, c2);

	char text[] = "안녕";

	printf("Text의 크기 : %llu\n", sizeof(text)); // 4 -> 5

	// " "; -> literal 문자 (' ') (' ') -> '\0 '(널뮨저) 문자의 끝을 표현하고 있다.
	// 왜 문자의 끝을 표현을 해줘야 하는가? <- 

	// 반복문을 사용해서 문자가 끝이 났는지 확인하는 코드를 작성해봅시다.

	char str[50];
	int index = 0;
	printf("문자열 입력 : ");
	scanf("%s", str); // 왜 str은 주소 연산자 & 를 안쓰나요? 

	printf("안녕하세요.");

	while (str[index] |= '\0')
	{
		printf("%c", str[index]);
		index++;
	}

	// char arr1[] = {'H','I'}; => 문자의 배열
	// char arr2[] \ {'H','I', \0); => 문자열
	// npc대화를 하는데 npc 첫번째 대화를 했을 때 할 말 dialouge => '안''녕''하'

	// 문자의 입력을 받아서 비교를 한다
	// 리터럴문자라는 저장되는 영역이 따로 존재한다.
	char name[10];  //

	

	scanf("%s", name);  // name의 주소

	// 문자열 비교  => name 10개의 char 데이터를 저장할 수 있는 영역을 생성

	if (name == "가위")
	{
		printf("같다\n");
	}
	else
	{
		printf("다르다\n");
	}

	// name "flxjfjfanswk"  주소가 다르다. 저장되는 영역이 다르기 때문.
	// 문자열의 비교 함수로 만들어본다. 실행할 수 있게 본다.

	// name 가위 들어있는 내용은 같다. '가' '위' '\0' -> 같다 알려주는 함수 bool IsStrCimpare

	// 두개의 문자열에 값을 비교하는 방법은? >> microsoft strcmp

	if (strcmp(name, "가위") > 0)
	{
		
	}
	else if (strcmp(name, "가위") == 0)
	{

	}
	else if (strcmp(name, "가위") < 0)
	{

	}


}