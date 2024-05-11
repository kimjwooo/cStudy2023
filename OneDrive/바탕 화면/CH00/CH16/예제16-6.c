#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[])   // 명령행 인수를 받을 매개변수
{
	int i;
	char db1[80] = "data1";
	char db2[80] = { 0 };

	for (i = 0; i < argc; i++)    // 인수 개수 만큼 반복
	{
		printf("%s\n", argv[i]);  // 인수로 받은 문자열 출력
	}

	// printf("%s %s\n", argv[1], argv[2]);
	strcpy(argv[3], argv[2]); // 이거 되는지 실행해봐 되게 바꿔
//	strcpy(db2, db1);
	printf("%s %s\n", db1, db2);
	return 0;
}


/*
int main(int argc, char* argv[])   // 명령행 인수를 받을 매개변수
{
	int i;
	char db[80] = "data1";
	char dbb[80] = { 0 };

	for (i = 0; i < argc; i++)    // 인수 개수 만큼 반복
	{
		printf("%s\n", argv[i]);  // 인수로 받은 문자열 출력
	}

	// printf("%s %s\n", argv[1], argv[2]);
	// strcpy(argv[3], argv[2]); 이거 되는지 실행해봐 되게 바꿔
	strcpy(dbb, db);
	printf("%s %s\n", db, dbb);
	return 0;
}
*/

