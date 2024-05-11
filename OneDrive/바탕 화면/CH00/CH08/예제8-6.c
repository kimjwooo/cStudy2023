#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//fgets, fputs??? - 이 주소에 있는 파일을 읽어와라!, 파일에 출력하라! (참고)
int main(void)
{
	char str[80];

	printf("문자열 입력 : ");  // 입력 안내 메시지 출력, 문자열을 출력할 때 문자열 앞에 &는 항상 생략되어 있구나~
	scanf("%s", str);
	//gets(str);                 // 빈칸을 포함한 문자열 입력, get string
	//puts("입력된 문자열 : ");  // 문자열 상수 출력
	printf("%s", str);                 // 배열에 저장된 문자열 출력

	return 0;
}