#include <stdio.h>

void assign10(void);
void assign20(void);

int a;                   // 전역 변수 선언 ( 메모리 공유의 목적 )
						 // 0으로 초기화하지 않아도 0으로 되어 있음

int main(void)
{
	printf("함수 호출 전 a 값 : % d\n", a);  // 전역 변수 a 출력

	assign10();
	assign20();

	printf("함수 호출 후 a 값 : % d\n", a);  // 전역 변수 a 출력

	return 0;
}

void assign10(void)
{
	a = 10;              // 전역 변수 a에 10 대입
}

void assign20(void)		 // 메모리 최적화
{
	int a;               // 전역 변수와 같은 이름의 지역 변수 선언

	a = 20;              // 지역 변수 a에 20 대입
}