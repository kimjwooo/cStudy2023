#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[])   // ����� �μ��� ���� �Ű�����
{
	int i;
	char db1[80] = "data1";
	char db2[80] = { 0 };

	for (i = 0; i < argc; i++)    // �μ� ���� ��ŭ �ݺ�
	{
		printf("%s\n", argv[i]);  // �μ��� ���� ���ڿ� ���
	}

	// printf("%s %s\n", argv[1], argv[2]);
	strcpy(argv[3], argv[2]); // �̰� �Ǵ��� �����غ� �ǰ� �ٲ�
//	strcpy(db2, db1);
	printf("%s %s\n", db1, db2);
	return 0;
}


/*
int main(int argc, char* argv[])   // ����� �μ��� ���� �Ű�����
{
	int i;
	char db[80] = "data1";
	char dbb[80] = { 0 };

	for (i = 0; i < argc; i++)    // �μ� ���� ��ŭ �ݺ�
	{
		printf("%s\n", argv[i]);  // �μ��� ���� ���ڿ� ���
	}

	// printf("%s %s\n", argv[1], argv[2]);
	// strcpy(argv[3], argv[2]); �̰� �Ǵ��� �����غ� �ǰ� �ٲ�
	strcpy(dbb, db);
	printf("%s %s\n", db, dbb);
	return 0;
}
*/

