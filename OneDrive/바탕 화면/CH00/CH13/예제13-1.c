#include <stdio.h>

void assign(void);     // 함수 선언

int main(void)
{
	auto int a = 0;    // 지역 변수 선언과 초기화, auto는 생략 가능
					   // 웬만하면 지역변수 이름을 똑같이 만들지 말자
	assign();          // 함수 호출
	printf("main 함수 a : %d\n", a);

	return 0;
}

void assign(void)
{
	int a;             // main 함수에 있는 변수와 같은 이름의 지역 변수, auto 생략
					   // 포인터를 사용하면 지역변수 a를 받아올 수 있음
	a = 10;            // assign 함수 안에 선언된 a에 대입
	printf("assign 함수 a : %d\n", a);    // assign 함수에 선언된 a 값 출력
}