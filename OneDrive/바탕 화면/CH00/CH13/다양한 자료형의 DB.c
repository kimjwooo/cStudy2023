// �� �Լ� ������ �پ��� �ڷ����� DB�� ����,  main()������ �����Ͽ���.

#include <stdio.h>
#define MAX 100



int* aaa(int);

double* bbb(double);

char* ccc(char);



int main(void)

{

	int* p1;

	double* p2;

	char* p3;



	p1 = aaa(0);

	p2 = bbb(3.14);

	p3 = ccc('a');



	// ����� ����, ����/�Ǽ�/����

	// ���� �������, p1

	// ���� �Ǽ����, p2

	// ���� ���ڶ��, p3

	// ����, switch ~ case



	return 0;

}



int* aaa(int x1)    // int�� ������ �ּҸ� ��ȯ�ϴ� �Լ�

{

	static int DB1[MAX];

	int i;

	for (i = 0; i < MAX; i++)

		DB1[i] = x1;



	return DB1; // �ּ�

}



double* bbb(double pi)

{

	static double DB2[MAX];

	int i;

	for (i = 0; i < MAX; i++)

		DB2[i] = pi;



	return DB2; // �ּ�

}



char* ccc(char str)

{

	static char DB3[MAX];

	int i;

	for (i = 0; i < MAX; i++)

		DB3[i] = str;



	return DB3;

}