#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int ary[3] = { 10, 20, 30 };//�߰�ȣ
	int ary[3];
	int i;

	int* pa = ary;

	for (i = 0; i < 3; i++)
	{
		scanf("%d", pa + i);
		//scanf("%d %d %d", pa, pa + 1, pa + 2); 
	}

	printf("�迭�� �� : ");
	for (i = 0; i < sizeof(ary)/sizeof(int); i++)
	{
		printf("%d", pa + i);
		
		//printf("%d ", *pa);   // pa�� ����Ű�� �迭 ��� ���				//�ſ� �߿�
		//pa++;                 // ���� �迭 ��Ҹ� ����Ű���� pa �� ����	//�ſ� �߿�
	}

	return 0;
}