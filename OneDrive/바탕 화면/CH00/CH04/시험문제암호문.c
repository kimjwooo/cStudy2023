#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//define KEY 5

int main(void)
{
	int x; //평문
	const int KEY = 5; //상수
	int y; //암호문
	int z; //복호문

	printf("평문 입력 : ");
	scanf("%d", &x);

	y = x ^ KEY;
	printf("암호문 출력 : %d\n", y);

	z = y ^ KEY;
	printf("복호문문 출력 : %d\n", z);

	return 0;
}