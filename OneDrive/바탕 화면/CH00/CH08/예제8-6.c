#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//fgets, fputs??? - �� �ּҿ� �ִ� ������ �о�Ͷ�!, ���Ͽ� ����϶�! (����)
int main(void)
{
	char str[80];

	printf("���ڿ� �Է� : ");  // �Է� �ȳ� �޽��� ���, ���ڿ��� ����� �� ���ڿ� �տ� &�� �׻� �����Ǿ� �ֱ���~
	scanf("%s", str);
	//gets(str);                 // ��ĭ�� ������ ���ڿ� �Է�, get string
	//puts("�Էµ� ���ڿ� : ");  // ���ڿ� ��� ���
	printf("%s", str);                 // �迭�� ����� ���ڿ� ���

	return 0;
}