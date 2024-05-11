#include <stdio.h>

void print_line(void);                // 함수 선언

//함수 타입 : 0,0

int main(void)
{
	print_line();                     // 함수 호출
	printf("학번     이름     전공     학점\n");
	print_line();                     // 함수 호출

	return 0;
}

void print_line(void)
{
	int i;

	//for (i = 0; i < 50; i++)          // 50번 반복하여 '-' 출력
	for (i = 0; ; i++)			//무한 반복
	{
		if (i >= 50)
			break;
		printf("-");
	}
	printf("\n");
}