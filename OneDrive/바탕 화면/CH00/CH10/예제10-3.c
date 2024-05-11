#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int ary[3] = { 10, 20, 30 };//중괄호
	int ary[3];
	int i;

	int* pa = ary;

	for (i = 0; i < 3; i++)
	{
		scanf("%d", pa + i);
		//scanf("%d %d %d", pa, pa + 1, pa + 2); 
	}

	printf("배열의 값 : ");
	for (i = 0; i < sizeof(ary)/sizeof(int); i++)
	{
		printf("%d", pa + i);
		
		//printf("%d ", *pa);   // pa가 가리키는 배열 요소 출력				//매우 중요
		//pa++;                 // 다음 배열 요소를 가리키도록 pa 값 증가	//매우 중요
	}

	return 0;
}