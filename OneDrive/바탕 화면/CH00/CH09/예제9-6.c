#include <stdio.h>

// 문법적으로 문제가 없는 소스 코드, but 논리적 오류가 있음

int main(void)
{
	int a = 10;             // 변수 선언과 초기화
	int* p = &a;            // 포인터 선언과 동시에 a를 가리키도록 초기화
	int* pd;
	//double* pd;             // double형 변수를 가리키는 포인터

	pd = p;                 // 포인터 p 값을 포인터 pd에 대입
	printf("%d\n", *pd);   // pd가 가리키는 변수의 값 출력

	return 0;
}