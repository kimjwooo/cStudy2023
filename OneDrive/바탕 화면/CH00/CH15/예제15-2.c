#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);

int main(void)
{
	char* pa = &"success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);   // �ٲٱ� ���� ���ڿ� ���
	swap_ptr(&pa, &pb);                       // �Լ� ȣ��
	//swap_ptr(pa,pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);   // �ٲ� �Ŀ� ���ڿ� ���

	return 0;
}

//void swap_ptr(char* ppa, char* ppb)		  // ������ �����ͷ� ȣ���ϱ� - ���� ����
//{
//  ���������� ȣ���ϸ� pa�� pb�� �ִ� ���� �ٲٴ� ��(������ �����ͷ� ȣ��)�� �ƴ϶� ppa�� ppb�� ���� ���� �ٲ� ���̴�
//	char* pt;
//
//	pt = ppa;
//	ppa = ppb;
//	ppb = pt;
// 
//  printf("%s %s", ppa, ppb);
//}

void swap_ptr(char** ppa, char** ppb)		  
{
	char* pt;

	pt = *ppa;				//������ ������ ���� �̵�
	*ppa = *ppb;
	*ppb = pt;
}