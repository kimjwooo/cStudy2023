#include <stdio.h>
#define MAX 1000000
//���蹮���� �������� �ڵ�
int main(void)
{

	int a[MAX];							//�Ϲ� ���� ���� : 4MEGABYTE
	int* pa;
	int i;

	pa = &a[0];							//pa = a; �迭�� �̸��� �迭�� ���� �ּ�

	for ( i = 0; i < MAX; i++)
	
		*(pa + i) = i;					//������ ���� pa[i] = i; 

	for (i = 0; i < MAX; i++)
	{
		printf("%d, %d, %d \n", *(pa + i), pa[i], a[i]); 
		// �迭 a�� ������ ���� pa�� ���� �������� ���ΰ�?
		// �ּҸ��� ������ ������ ���� ������ �� �� �ֳ�?
	}

	return 0;
}