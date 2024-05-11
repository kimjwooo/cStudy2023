#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "kjw.h"

int main(void)
{
	char x,result;                  // char형 변수 선언과 초기화
	printf("알파벳 입력");
	scanf("%c", &x);
	result = check(x);
	printf("%c\n", result);

	return 0;
}

