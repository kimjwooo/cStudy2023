#include <stdio.h>
#define MAX 1000000
//시험문제에 내볼만한 코드
int main(void)
{

	int a[MAX];							//일반 변수 선언 : 4MEGABYTE
	int* pa;
	int i;

	pa = &a[0];							//pa = a; 배열의 이름은 배열의 시작 주소

	for ( i = 0; i < MAX; i++)
	
		*(pa + i) = i;					//데이터 쓰기 pa[i] = i; 

	for (i = 0; i < MAX; i++)
	{
		printf("%d, %d, %d \n", *(pa + i), pa[i], a[i]); 
		// 배열 a에 지정된 값을 pa를 통해 가져오는 것인가?
		// 주소만을 가져온 변수로 간접 접근을 할 수 있나?
	}

	return 0;
}