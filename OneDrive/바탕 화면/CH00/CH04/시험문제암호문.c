#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//define KEY 5

int main(void)
{
	int x; //��
	const int KEY = 5; //���
	int y; //��ȣ��
	int z; //��ȣ��

	printf("�� �Է� : ");
	scanf("%d", &x);

	y = x ^ KEY;
	printf("��ȣ�� ��� : %d\n", y);

	z = y ^ KEY;
	printf("��ȣ���� ��� : %d\n", z);

	return 0;
}