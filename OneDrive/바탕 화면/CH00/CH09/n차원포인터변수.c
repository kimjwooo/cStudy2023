#include <stdio.h>

//�⸻ ���� ����

int main(void)
{
	int a = 10;
	int* p = &a;			//1���� ������ ����
	int** pp = &p;			//2���� ������ ����
	int*** ppp = &pp;
	int**** pppp = &ppp;
	
	int* pd = p;			//*pp, **ppp, ***pppp

	int** pc = pp;			//n���� ������ ������ n-1������ ������ "�ּ�"�� �����ؾ��ϱ� ������.

	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%d\n", **pp);
	printf("%d\n", ***ppp);
	printf("%d\n",****pppp);

	printf("%d\n", *pd);

	printf("%d\n", **pc);
							//n���� ������ ������ n-1������ ������ �ּҸ� �����Ѵ�.

	return 0;
}