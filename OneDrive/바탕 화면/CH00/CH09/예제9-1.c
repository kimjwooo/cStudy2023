#include <stdio.h>

int main(void)
{
	int a;             // int형 변수 선언
	double b;          // double형 변수 선언
	char c;            // char형 변수 선언

	printf("%u, %x, %p\n", &a, &a, &a);			//%p : 포인터 변수로 받기 위한 변수의 주소
												//%u : %d에서 2^31이상을 넘어가면 주소 값이 음수로 바뀌어 잘못된 값이 나오기 때문에 unsigned를 사용.

	printf("int형 변수의 주소 : %u\n", &a);     // 주소 연산자로 주소 계산
	printf("double형 변수의 주소 : %u\n", &b);
	printf("char형 변수의 주소 : %u\n", &c);

	return 0;
}