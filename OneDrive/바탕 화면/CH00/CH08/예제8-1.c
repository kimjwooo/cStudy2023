#define _CRT_SECURE_NO_WARNINGS 
#define MAX 5
#include <stdio.h>

//���� p.236~242 ����

int main(void)
{
	int ary[MAX];                 // �迭�� �̸��� �迭�� ���� �ּ�, ���ӵ� �޸� ����, int�� ��� 5���� �迭 ����
	                              // ary�� array�� ����
	int i, x;
	/**(ary + 0) = 10;
	*(ary + 1) = 20;
	*(ary + 2) = ary[0] + ary[1];
	*/

	x = (sizeof(ary) / sizeof(int)); // �迭�� ������ ���ϴ� �˰���

	ary[0] = 10;                  // ù ��° �迭 ��ҿ� 10 ����
	ary[1] = 20;                  // �� ��° �迭 ��ҿ� 20 ����
	ary[2] = ary[0] + ary[1];     // ù ��°�� �� ��° ��Ҹ� ���� �� ��° ��ҿ� ����
	
	printf("Ű���� �Է� : ");
	//scanf("%d", &ary[3]);         // Ű����� �Է¹޾� �� ��° ��ҿ� ����

	for ( i = 0; i < x; i++)
	{
		scanf("%d", ary + i);		//scanf("%d", &ary[i]);
	}

	*(ary + 2) = ary[0] + ary[1];
	
	printf("����� ��� : ");
	for (i = 0; i < x; i++)
	{
		printf("%d\n", *&ary[i]);  //scanf("%d", *(ary + i));
	}
	//printf("%d\n", ary[2]);       // �� ��° �迭 ��� ���
	//printf("%d\n", ary[3]);
	//printf("%d\n", ary[4]);       // ������ �迭 ��Ҵ� ������ ��

	return 0;
}