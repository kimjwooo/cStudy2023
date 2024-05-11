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

//�˰��� 04 11-1.c
char check(char x)
{
	char cap, small;

	if ((x >= 'a') && (x <= 'z'))       // �빮�� �������
	{
		cap = x - ('a' - 'A');          // ��/�ҹ����� ���̸� ���� �ҹ��ڷ� ��ȯ
		return cap;
	}

	else if ((x >= 'A') && (x <= 'Z'))
	{

		small = x + ('a' - 'A');
		return small;
	}

	else
		return 0;
}

//�˰��� 05 11-2.c
void get_char(char* p, int size)				// == char* p = ary;	int size = MAX;
{
	int i = 0;

	while (i < size)
	{
		scanf(" %c", p);						// white space ����
		i++;
		p++;									// �̵��� ������ ���� �Ҵ�

		//scanf(" %c", p + i);					// ������ ������ ���� �Ҵ�
		//i++;
	}

}

//�˰��� 06 zombie.c
void zombie()
{

	while (1)
	{
		system("notepad.exe zombie.c");		// �޸��� �ҷ�����
	}

}