#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, grade;           // 학번과 학점을 저장할 변수

	printf("학번 입력 : ");
	scanf("%d", &num);        // 학번 입력 - 숫자이므로 whitespace로 해결 불가
	getchar();                // 버퍼에 남아 있는 개행 문자 제거 - whitespace의 역할처럼 버퍼에 남아 있는 불필요한 엔터를 제거하기 위해서
	printf("학점 입력 : ");
	grade = getchar();        // 학점 입력
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}