#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

int main(void)
{
	char str[MAX] = "applejam";              // ���ڿ� �ʱ�ȭ

	printf("���� ���ڿ� : % s\n", str);     // %s, �ּ����� �ʿ�, ���Ṯ�� ����, ���ڿ� �ʱ�ȭ ���ڿ� ���
	printf("���ڿ� �Է� : ");
	scanf("%s", str);                       // ���ο� ���ڿ� �Է�
	printf("�Է� �� ���ڿ� : %s\n", str);   // �Էµ� ���ڿ� ���
	

	//for (int i = 0; i < MAX; i++)
	//{
	//printf("���� Ȯ�� : %c %x", *(str + i), str + i);//%c ������ %x �ּҸ� ��Ÿ�� �� ���
	//}
	printf("���� Ȯ�� : %c ", *(str + 7));
	return 0;
}