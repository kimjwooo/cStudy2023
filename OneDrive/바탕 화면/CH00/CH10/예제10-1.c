#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 3

int main(void)
{
	int ary[MAX];
	int i;
	int* p = ary;

	*(ary + 0) = 10;                   // ary[0] = 10
	*(ary + 1) = *(p + 0) + 10;      // ary[1] = ary[0] + 10

	printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
	scanf("%d", p + 2);              // &ary[2] scanf�� ���� ary�� p�� ��ü�ؼ� ���� �������� �迭�� ���� �Է��� �� ����.

	for (i = 0; i < 3; i++)            // ��� �迭 ��� ��� == for (i = 0; i < sizeof(ary)/sizeof(int); i++) 
	{
		printf("%5d", *(p + i));    // ary[i]
	}

	return 0;
}