#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);              // ���ڿ� �Է�
	fputs(str, stdout);							 // ����Ϳ� ���ڿ� ���
	printf("�Էµ� ���ڿ��� %s�Դϴ�\n", str);   // ���ڿ� ���

	return 0;
}