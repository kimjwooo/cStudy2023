#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;

	if (a > 10)          // 조건식 : a가 10보다 크므로 조건식은 참
	{
		b = a;           // 실행문 : b = a 대입문 실행
	}

	printf("a : %d, b : %d\n", a, b);  // 대입이 수행되면 두 값은 같음

	return 0;
	

	/*
	
	스와핑
	
	int a = 10;
	int b = 20;
	a,b에 들어있는 데이터를 서로 바꾸고 싶음.

	a = b 이렇게 쓰면 안 됨

	int temp; 임시변수 지정
	temp = a;
	a = b;
	b = temp;

	*/
}