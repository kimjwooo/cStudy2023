#include <stdio.h>
#define MAX 100
#define PI 3.14

// student �Լ��� � ����� �����°�?

void student(int* p, int cnt);

int main(void)
{
	double circle_length[MAX];				//���� �ѷ� �迭 ����
	double * pa;					
	int R;									//���� ����

	pa = circle_length;

	for (R = 0; R < MAX; R++)
		*(pa + R) = R*PI;

	for (R = 0; R < MAX; R++)
		printf("%.3lf\n", *(pa + R));
	student(circle_length, MAX);
	return 0;
}

void student(int* p, int cnt)				// main �Լ��� �ڵ带 �״�� ���� ��
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