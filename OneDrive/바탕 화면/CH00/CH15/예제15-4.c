#include <stdio.h>

int main(void)
{
	int ary[5];

	//%d�� �ٲ��� �� ���̰� ���� ����

	printf("  ary�� �� : %u\t", ary);        // �ּҷμ��� �迭���� �� ���� �޸� �Ҵ�
	printf("   ary + 1 : %u\n", ary + 1);	 // ���� �ʵ�
	
	printf("  ary�� �ּ� : %u\t", &ary);     // �迭�� �ּ�
	printf("  &ary + 1 : %u\n", &ary + 1);	 // ���� DB

	return 0;
}