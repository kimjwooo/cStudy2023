#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 3

int main(void)
{
	int ary[MAX];
	int i;
	int* p = ary;

	*(ary + 0) = 10;                   // ary[0] = 10
	*(ary + 1) = *(p + 0) + 10;      // ary[1] = ary[0] + 10

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", p + 2);              // &ary[2] scanf에 들어가는 ary도 p로 대체해서 간접 접근으로 배열에 값을 입력할 수 있음.

	for (i = 0; i < 3; i++)            // 모든 배열 요소 출력 == for (i = 0; i < sizeof(ary)/sizeof(int); i++) 
	{
		printf("%5d", *(p + i));    // ary[i]
	}

	return 0;
}