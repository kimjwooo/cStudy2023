#include <stdio.h>

//기말 시험 문제

int main(void)
{
	int a = 10;
	int* p = &a;			//1차원 포인터 변수
	int** pp = &p;			//2차원 포인터 변수
	int*** ppp = &pp;
	int**** pppp = &ppp;
	
	int* pd = p;			//*pp, **ppp, ***pppp

	int** pc = pp;			//n차원 포인터 변수는 n-1차원의 변수의 "주소"를 저장해야하기 떄문에.

	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%d\n", **pp);
	printf("%d\n", ***ppp);
	printf("%d\n",****pppp);

	printf("%d\n", *pd);

	printf("%d\n", **pc);
							//n차원 포인터 변수는 n-1차원의 변수의 주소를 저장한다.

	return 0;
}