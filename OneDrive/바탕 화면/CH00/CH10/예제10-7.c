#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "kjw.h"

// find_min ���� ����

//void input_ary(double* pa, int size);
//double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;                               // �ִ��� ������ ����
	int size = sizeof(ary) / sizeof(ary[0]);  // �迭 ����� ���� ���

	input_ary(ary, size);                     // �迭�� �� �Է�
	max = find_max(ary, size);                // �迭�� �ִ� ��ȯ
	printf("�迭�� �ִ� : %.1lf\n", max);

	return 0;
}
