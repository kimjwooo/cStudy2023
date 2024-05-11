#pragma once

// ����� ��� ���̺귯�� �����ϴ� ���� ���� ����

//�˰��� 01 10-5,6.c
void print_ary(int* pa, int size)         // �Ű������� ������ ����
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);   // pa�� �迭 ��� ǥ���� ���
	}
}

//�˰���02 10-7.c
void input_ary(double* pa, int size)          // double �����͸� �Ű������� ����
{
	int i;

	printf("%d���� �Ǽ��� �Է� : ", size);
	for (i = 0; i < size; i++)                // size�� ���� ���� �ݺ� Ƚ�� ����
	{
		scanf("%lf", pa + i);                 // &pa[i]�� ����, �Է��� �迭 ����� �ּҸ� ����
	}
}

//�˰���03 10-7.c
double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];                              // ù ��° �迭 ����� ���� �ִ����� ����
	for (i = 1; i < size; i++)                // �� ��° �迭 ��Һ��� max�� ��
	{
		if (pa[i] > max) max = pa[i];         // ���ο� �迭 ����� ���� max���� ũ�� ����
	}

	return max;                               // �ִ� ��ȯ
}