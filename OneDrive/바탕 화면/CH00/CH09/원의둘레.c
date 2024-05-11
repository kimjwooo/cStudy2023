#include <stdio.h>
#define MAX 100
#define PI 3.14

// student 함수는 어떤 기능을 가지는가?

void student(int* p, int cnt);

int main(void)
{
	double circle_length[MAX];				//원의 둘레 배열 생성
	double * pa;					
	int R;									//원의 지름

	pa = circle_length;

	for (R = 0; R < MAX; R++)
		*(pa + R) = R*PI;

	for (R = 0; R < MAX; R++)
		printf("%.3lf\n", *(pa + R));
	student(circle_length, MAX);
	return 0;
}

void student(int* p, int cnt)				// main 함수의 코드를 그대로 가져 옴
{
	int i;
	int student[MAX];

	for ( i = 0; i < cnt; i++)
	{
		student[i] = *(p + i);
	}
	for (i = 0; i < cnt; i++)
		printf("%.3lf\n", student[i]);
}