#include <stdio.h>
#include "kjw.h"
void print_ary(int* pa, int size);   // 함수 선언, 매개변수 2개

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };           // 배열 요소의 개수가 5개인 배열
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };   // 요소의 개수가 7개인 배열

	print_ary(ary1, sizeof(ary1)/sizeof(int));              // ary1 배열 출력, 배열 요소의 개수 전달
	printf("\n");
	print_ary(ary2, sizeof(ary2) / sizeof(int));              // ary2 배열 출력, 배열 요소의 개수 전달

	return 0;
}
