#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14		

double area(double r);
double circle(double r);

int main(void)
{
	double x = 4.0;
	scanf("%lf", &x);
	printf("%lf", area(x));
	printf("%lf", circle(x));
	return 0;

}

double area(double r)
{
	double area1 = PI * r * r;
	return area1;
}

double circle(double r)
{
	double circle1 = PI * 2 * r;
	return circle1;
}

//���α׷� ��ü�� ����� �� �޸𸮰� ������

// 1. �˰����� �ۼ��Ͻÿ�. 2. �˰����� ����Ͽ� ���α׷��� �̿��Ͻÿ�.
// ���� �� �� ���� 1�ÿ� ���α׷��� ���� ����

