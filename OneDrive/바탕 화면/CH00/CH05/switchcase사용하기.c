#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//���� ���� ����� ������ Ȧ���� ¦���� ������ switch case���� �ۼ��Ͻÿ�.

int main(void)
{
	int score, grade;

	printf("���� �Է� : __\b\b");
	scanf("%d", &score);


	if (score >= 95 && score <= 100)
		grade = 1;

	if (score >= 90 && score < 95)
		grade = 2;

	else
		grade = 3;

	switch (grade)
	{
	case 1:
		printf("A");
		break;

	case 2:
		printf("B");
		break;

	case 3:
		printf("F");
		break;

	default:
		printf("���� �߻�");
		break;
	}
}