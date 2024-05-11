#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int score, grade;

	printf("점수 입력 : __\b\b");
	scanf("%d", &score);
	/*
	
	if(score>=95 && score<=100)
		printf("A+\n");

	if(score>=90 && score<95)
		printf("A\n");

	else
		printf("F\n");

	위와 같은 형태로 else if를 사용하지 않을 수 있다.
	else가 어디 if문에 걸리는지 모르므로 논리적 오류가 생긴다.

	*/
	if (score >= 95)
		printf("A+\n");

	else if (score >= 90)
		printf("A\n");

	else if (score >= 85)
		printf("B+\n");

	else
		printf("F\n");

	printf("프로그램을 종료하려면 아무 키나 누르세요...\n"); 
	getchar();													//사용자 입력을 기다려 출력 시간을 늘림

	return 0;
}
