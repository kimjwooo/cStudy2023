#include <stdio.h>
#include "kjw.h"

//void print_ary(int* pa);        // �Լ� ����
//int ary[5] = { 10, 20, 30, 40, 50 };	// ���� �迭�� ������ ���� �ϸ� �޸� �Ҹ� ŭ
		// printf("%d", ary[i]);	//���� �迭�� ���

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary, sizeof(ary) / sizeof(int));             // �迭���� �ְ� �Լ� ȣ��

	return 0;
}
