#include <stdio.h>
#define MAX 100

// 손코딩해보기

/*
int* sum(int a, int b);   // int형 변수의 주소를 반환하는 함수 선언

int main(void)
{
	int* resp;            // 반환값을 저장할 포인터 resp(result pointer)

	resp = sum(10, 20);   // 반환된 주소는 resp에 저장
	printf("두 정수의 합 : %d\n", *resp);   // resp가 가리키는 변숫값 출력

	return 0;
}

int* sum(int a, int b)    // int형 변수의 주소를 반환하는 함수
{
	static int res;       // 정적 지역 변수

	res = a + b;          // 두 정수의 합을 res(result)에 저장

	return &res;          // 정적 지역 변수의 주소 반환
}
*/

int main(void)
{
	int* p;
	p = sum(1);							// sum 값의 1을 0으로 바꿔보기
	
	for (int i = 0; i < MAX; i++)
	{
		printf("%d\n", p[i]);
	}
	return 0;
}

int* sum(int x)
{
	static int ary[MAX];					
	// int ary[MAX]와 차이점 : 지역 변수의 메모리가 많은 부분을 차지하고 있었기 때문에 함수가 죽어도 보존되는 경우가 있음!

	for (int i = 0; i < MAX; i++)
	{
		ary[i] = x;
	}
	return ary;
}