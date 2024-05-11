#include <stdio.h>

int main(void)
{
	int a = 10;         // 비트열 00000000 00000000 00000000 00001010
	int b = 12;         // 비트열 00000000 00000000 00000000 00001100

	printf("a & b : %d\n", a & b); //8
	printf("a ^ b : %d\n", a ^ b);  //6 중요_ 시험 문제 암호문을 복호문으로 만들자!
	printf("a | b : %d\n", a | b);  //14
	printf("~a : %d\n", ~a);   //틸드 ! 중요
	printf("a << 1 : %d\n", a << 1);   //중요_ 좌측 비트일 경우 비어있는 칸은 0으로 채우기
	printf("a >> 2 : %d\n", a >> 2);   //중요

	return 0;
}