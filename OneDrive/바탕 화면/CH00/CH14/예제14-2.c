#include <stdio.h>

int main(void)
{
	int num[3][4] = {       // 2���� �迭�� ����� �ʱ�ȭ
		{1, 2, 3, 4},       // num�� 0���� record �ּ� : num[0] == &num[0][0] == num == num[0] + 0 == *(num+0)+0
		{5, 6, 7, 8},       // num�� 1���� record �ּ� : num[1] == &num[1][0] == num[1]+0 == *(num+1)+0
		{9, 10, 11, 12}     // num�� 2���� record �ּ� : num[2] == &num[2][0] == num[2]+0 == *(num+2)+0
	};

	// int num[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };�� ���� ������

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", num[i][j]);   // �迭 ��� ���
		}
		printf("\n");       // �� ���� ����� �Ŀ� �� �ٲ�
	}

	return 0;
}