#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 3

int main()
{
	FILE* fp;
	int ary[MAX_SIZE];
	int i;

	fp = fopen("00.txt", "w");
	for (i = 0; i < MAX_SIZE; i++)
	{
		fprintf(stdout, "%d ������ �Է�:", i);  // ��������
		scanf("%d", &ary[i]); // Ű���� �Է�
		fprintf(stdout, "%d ��° �����ʹ� %d �Դϴ�.\n", i, ary[i]); // ��������
		fprintf(fp, "%d ��° �����ʹ� %d �Դϴ�.\n", i, ary[i]);     // ���� ���(���)
	}
	fprintf(stdout, "-----------------------------------------------\n");
	fclose(fp);
	system("notepad.exe 00.txt");

	return 0;
}