#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;                // 포인터 pa는 변수 a를 가리킨다. 직접 접근으로만 값을 수정할 수 있게 하는 코드

	printf("변수 a 값 : %d\n", *pa);   // 포인터를 간접 참조하여 a 출력
	pa = &b;                           // 포인터가 변수 b를 가리키게 한다.
	printf("변수 b 값 : %d\n", *pa);   // 포인터를 간접 참조하여 b 값 출력
	pa = &a;                           // 포인터가 다시 변수 a를 가리킨다.
	a = 20;                            // a를 직접 참조하여 값을 바꾼다.
	printf("변수 a 값 : %d\n", *pa);   // 포인터로 간접 참조하여 바뀐 값 출력

	/*
	*pa = 100;
	printf("변수 a 값 : %d\n", *pa); 
	
	ERROR : 식이 수정할 수 있는 value여야 합니다.
	a를 간접 참조한다면 a의 값을 바꾸지 못한다.
	*/

	return 0;
}