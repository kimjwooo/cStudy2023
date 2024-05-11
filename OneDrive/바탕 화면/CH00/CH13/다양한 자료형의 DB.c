// 각 함수 내에서 다양한 자료형의 DB를 구축,  main()에서는 참고하여라.

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



	// 사용자 선택, 정수/실수/문자

	// 만약 정수라면, p1

	// 만약 실수라면, p2

	// 만약 문자라면, p3

	// 만약, switch ~ case



	return 0;

}



int* aaa(int x1)    // int형 변수의 주소를 반환하는 함수

{

	static int DB1[MAX];

	int i;

	for (i = 0; i < MAX; i++)

		DB1[i] = x1;



	return DB1; // 주소

}



double* bbb(double pi)

{

	static double DB2[MAX];

	int i;

	for (i = 0; i < MAX; i++)

		DB2[i] = pi;



	return DB2; // 주소

}



char* ccc(char str)

{

	static char DB3[MAX];

	int i;

	for (i = 0; i < MAX; i++)

		DB3[i] = str;



	return DB3;

}