#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;

	if (a > 10)          // ���ǽ� : a�� 10���� ũ�Ƿ� ���ǽ��� ��
	{
		b = a;           // ���๮ : b = a ���Թ� ����
	}

	printf("a : %d, b : %d\n", a, b);  // ������ ����Ǹ� �� ���� ����

	return 0;
	

	/*
	
	������
	
	int a = 10;
	int b = 20;
	a,b�� ����ִ� �����͸� ���� �ٲٰ� ����.

	a = b �̷��� ���� �� ��

	int temp; �ӽú��� ����
	temp = a;
	a = b;
	b = temp;

	*/
}