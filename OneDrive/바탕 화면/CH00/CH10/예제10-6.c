#include <stdio.h>
#include "kjw.h"
void print_ary(int* pa, int size);   // �Լ� ����, �Ű����� 2��

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };           // �迭 ����� ������ 5���� �迭
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };   // ����� ������ 7���� �迭

	print_ary(ary1, sizeof(ary1)/sizeof(int));              // ary1 �迭 ���, �迭 ����� ���� ����
	printf("\n");
	print_ary(ary2, sizeof(ary2) / sizeof(int));              // ary2 �迭 ���, �迭 ����� ���� ����

	return 0;
}
