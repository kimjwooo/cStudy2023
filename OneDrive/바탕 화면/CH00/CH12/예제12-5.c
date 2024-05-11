#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);              // 문자열 입력
	fputs(str, stdout);							 // 모니터에 문자열 출력
	printf("입력된 문자열은 %s입니다\n", str);   // 문자열 출력

	return 0;
}