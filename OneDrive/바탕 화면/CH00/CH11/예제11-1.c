#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "kjw.h"

int main(void)
{
	char x,result;                  // char�� ���� ����� �ʱ�ȭ
	printf("���ĺ� �Է�");
	scanf("%c", &x);
	result = check(x);
	printf("%c\n", result);

	return 0;
}

