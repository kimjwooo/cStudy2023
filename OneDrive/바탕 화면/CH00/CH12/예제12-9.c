#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>                // strncpy �Լ� ����� ���� ��� ���� ����

int main(void)
{
	char str[20] = "mango tree";   // �迭 �ʱ�ȭ

	strncpy(str, "apple-pie", 5);  // "apple-pie"���� �ټ� ���ڸ� ����
	printf("%s\n", str);           // ���� ���� ���ڿ� ���

	str[5] = '\0';				   // '' ���ڸ� �־���ϹǷ� ���� ����ǥ ���
	printf("%s\n", str);
	
	return 0;
}