#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, grade;           // �й��� ������ ������ ����

	printf("�й� �Է� : ");
	scanf("%d", &num);        // �й� �Է� - �����̹Ƿ� whitespace�� �ذ� �Ұ�
	getchar();                // ���ۿ� ���� �ִ� ���� ���� ���� - whitespace�� ����ó�� ���ۿ� ���� �ִ� ���ʿ��� ���͸� �����ϱ� ���ؼ�
	printf("���� �Է� : ");
	grade = getchar();        // ���� �Է�
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}