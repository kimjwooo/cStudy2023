#define _CRT_SECURE_NO_WARNINGS 
#define MAX 5
#include <stdio.h>

//교재 p.236~242 내용

int main(void)
{
	int ary[MAX];                 // 배열의 이름은 배열의 시작 주소, 연속된 메모리 공간, int형 요소 5개의 배열 선언
	                              // ary는 array의 축약어
	int i, x;
	/**(ary + 0) = 10;
	*(ary + 1) = 20;
	*(ary + 2) = ary[0] + ary[1];
	*/

	x = (sizeof(ary) / sizeof(int)); // 배열의 개수를 구하는 알고리즘

	ary[0] = 10;                  // 첫 번째 배열 요소에 10 대입
	ary[1] = 20;                  // 두 번째 배열 요소에 20 대입
	ary[2] = ary[0] + ary[1];     // 첫 번째와 두 번째 요소를 더해 세 번째 요소에 저장
	
	printf("키보드 입력 : ");
	//scanf("%d", &ary[3]);         // 키보드로 입력받아 네 번째 요소에 저장

	for ( i = 0; i < x; i++)
	{
		scanf("%d", ary + i);		//scanf("%d", &ary[i]);
	}

	*(ary + 2) = ary[0] + ary[1];
	
	printf("모니터 출력 : ");
	for (i = 0; i < x; i++)
	{
		printf("%d\n", *&ary[i]);  //scanf("%d", *(ary + i));
	}
	//printf("%d\n", ary[2]);       // 세 번째 배열 요소 출력
	//printf("%d\n", ary[3]);
	//printf("%d\n", ary[4]);       // 마지막 배열 요소는 쓰레기 값

	return 0;
}