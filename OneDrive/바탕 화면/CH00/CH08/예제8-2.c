#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 5

int main(void)
{
	int score[MAX];                // �ټ� ������ ������ �Է��� int�� �迭 ����
	int i;                          // �ݺ� ���� ����
	int total = 0;                  // ������ ������ ����
	double avg;                     // ����� ������ ����
	
	printf("%x", main);

	for(i = 0; i < MAX; i++)          // i�� 0���� 4���� 5�� �ݺ�, �ݺ��Ǵ� ���� ����� ���� 
	{
		scanf("%d", &score[i]);     // �� �迭 ��ҿ� ���� �Է�
	}

	for (i = 0; i < MAX; i++)
	{
		total += score[i];          // ������ �����Ͽ� ���� ���
	}
	avg = total / (double)MAX;              // ��� ���

	for (i = 0; i < MAX; i++)
	{
		printf("%5d", score[i]);    // ���� ���
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);  // ��� ���

	return 0;
}