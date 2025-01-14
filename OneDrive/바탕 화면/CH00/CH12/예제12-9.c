#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>                // strncpy 함수 사용을 위한 헤더 파일 포함

int main(void)
{
	char str[20] = "mango tree";   // 배열 초기화

	strncpy(str, "apple-pie", 5);  // "apple-pie"에서 다섯 문자만 복사
	printf("%s\n", str);           // 복사 받은 문자열 출력

	str[5] = '\0';				   // '' 문자를 넣어야하므로 작은 따옴표 사용
	printf("%s\n", str);
	
	return 0;
}