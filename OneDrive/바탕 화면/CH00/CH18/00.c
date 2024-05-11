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
		fprintf(stdout, "%d 데이터 입력:", i);  // 모니터출력
		scanf("%d", &ary[i]); // 키보드 입력
		fprintf(stdout, "%d 번째 데이터는 %d 입니다.\n", i, ary[i]); // 모니터출력
		fprintf(fp, "%d 번째 데이터는 %d 입니다.\n", i, ary[i]);     // 파일 출력(기록)
	}
	fprintf(stdout, "-----------------------------------------------\n");
	fclose(fp);
	system("notepad.exe 00.txt");

	return 0;
}