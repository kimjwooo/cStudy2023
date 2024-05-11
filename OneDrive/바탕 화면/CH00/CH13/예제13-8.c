#include <stdio.h>
#define MAX 100

// ���ڵ��غ���

/*
int* sum(int a, int b);   // int�� ������ �ּҸ� ��ȯ�ϴ� �Լ� ����

int main(void)
{
	int* resp;            // ��ȯ���� ������ ������ resp(result pointer)

	resp = sum(10, 20);   // ��ȯ�� �ּҴ� resp�� ����
	printf("�� ������ �� : %d\n", *resp);   // resp�� ����Ű�� ������ ���

	return 0;
}

int* sum(int a, int b)    // int�� ������ �ּҸ� ��ȯ�ϴ� �Լ�
{
	static int res;       // ���� ���� ����

	res = a + b;          // �� ������ ���� res(result)�� ����

	return &res;          // ���� ���� ������ �ּ� ��ȯ
}
*/

int main(void)
{
	int* p;
	p = sum(1);							// sum ���� 1�� 0���� �ٲ㺸��
	
	for (int i = 0; i < MAX; i++)
	{
		printf("%d\n", p[i]);
	}
	return 0;
}

int* sum(int x)
{
	static int ary[MAX];					
	// int ary[MAX]�� ������ : ���� ������ �޸𸮰� ���� �κ��� �����ϰ� �־��� ������ �Լ��� �׾ �����Ǵ� ��찡 ����!

	for (int i = 0; i < MAX; i++)
	{
		ary[i] = x;
	}
	return ary;
}