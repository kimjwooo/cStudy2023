#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10
#include "kjw.h"

void get_char(char*,int);

int main(void)
{
	char ary[MAX];

	get_char(ary, MAX);

	printf("Ãâ·Â : ");

	for (int i = 0; i < MAX; i++)
	{
		printf("%c ", ary[i]);
	}

	return 0;
}
