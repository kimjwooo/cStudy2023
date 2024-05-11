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

//프로그램 전체가 종료될 때 메모리가 지워짐

// 1. 알고리즘을 작성하시오. 2. 알고리즘을 사용하여 프로그램을 이용하시오.
// 시험 전 날 새벽 1시에 프로그래밍 문제 나옴

