﻿#include<stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;
	int c = a + b;
	printf("%d\n", *&c);
	printf("%o\n", *&c);
	printf("%p\n", &*&c);
	return 0;

}