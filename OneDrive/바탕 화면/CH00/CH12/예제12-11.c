#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>                            // strlen 함수 사용을 위한 헤더 파일 포함

// 낭비되는 공간과 사용하고 있는 공간을 구하여라. - 시험 문제

int main(void)
{
	char str1[80], str2[80];                   // 두 문자열을 입력할 배열
	char* resp;                                // 문자열이 긴 배열을 선택할 포인터

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);                 // 2개의 문자열 입력
	if (strlen(str1) > strlen(str2))           // 배열에 입력된 문자열의 길이 비교
		resp = str1;                           // 첫 번째 배열이 긴 경우 선택
	else
		resp = str2;                           // 두 번째 배열이 긴 경우 선택
	printf("이름이 긴 과일은 : %s\n", resp);   // 선택된 배열의 문자열 출력

	printf("나의 DB : %d \n낭비되는 공간 : %d\n", sizeof(str1), sizeof(str1)-(strlen(str1)+1));  
	
	// sizeof 연산자 : 배열의 전체 공간을 연산해줌 but, strlen 함수 : 80바이트 공간 안에 사용하고 있는 공간만 출력

	// 
	
	return 0;
}