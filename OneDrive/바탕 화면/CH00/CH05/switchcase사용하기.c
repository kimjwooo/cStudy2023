#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//시험 문제 당신의 점수를 홀수와 짝수로 나누어 switch case문을 작성하시오.

int main(void)
{
	int score, grade;

	printf("점수 입력 : __\b\b");
	scanf("%d", &score);


	if (score >= 95 && score <= 100)
		grade = 1;

	if (score >= 90 && score < 95)
		grade = 2;

	else
		grade = 3;

	switch (grade)
	{
	case 1:
		printf("A");
		break;

	case 2:
		printf("B");
		break;

	case 3:
		printf("F");
		break;

	default:
		printf("오류 발생");
		break;
	}
}