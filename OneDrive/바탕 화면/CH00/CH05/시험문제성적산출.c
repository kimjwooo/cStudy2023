#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int score, grade;

	printf("���� �Է� : __\b\b");
	scanf("%d", &score);
	/*
	
	if(score>=95 && score<=100)
		printf("A+\n");

	if(score>=90 && score<95)
		printf("A\n");

	else
		printf("F\n");

	���� ���� ���·� else if�� ������� ���� �� �ִ�.
	else�� ��� if���� �ɸ����� �𸣹Ƿ� ���� ������ �����.

	*/
	if (score >= 95)
		printf("A+\n");

	else if (score >= 90)
		printf("A\n");

	else if (score >= 85)
		printf("B+\n");

	else
		printf("F\n");

	printf("���α׷��� �����Ϸ��� �ƹ� Ű�� ��������...\n"); 
	getchar();													//����� �Է��� ��ٷ� ��� �ð��� �ø�

	return 0;
}
