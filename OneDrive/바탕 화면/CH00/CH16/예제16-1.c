#include <stdio.h>
#include <stdlib.h>       // malloc, free �Լ� ����� ���� ��� ����

int main(void)
{
	int* pi;              // ���� �Ҵ� ������ ������ ������ ����
	double* pd;

	/* ���蹮����.. �ݵ�ó��Կ�..
	* 
	* 
	* 
	* 
	* 
	int* pi[5];              
	double* pd[5];
	*/
	
	pi = (int*)malloc(sizeof(int));		       // �޸� ���� �Ҵ� �� ������ ����

	// �ŷڼ� �ڵ�
	if (pi == NULL)						       // ���� �Ҵ翡 �����ϸ� NULL ������ ��ȯ
	{
		printf("# �޸𸮰� �����մϴ�.\n");    // ���� ��Ȳ �޽��� ���
		exit(1);                               // ���α׷� ����		// ���α׷� Ż��Ƽ��..
	}
	//

	pd = (double*)malloc(sizeof(double));

	*pi = 10;                                  // �����ͷ� ���� �Ҵ� ���� ���
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi);     // ���� �Ҵ� ������ ����� �� ���
	printf("�Ǽ������� ��� : %.1lf\n", *pd);

	free(pi);                                  // ���� �Ҵ� ���� ��ȯ
	free(pd);

	return 0;
}