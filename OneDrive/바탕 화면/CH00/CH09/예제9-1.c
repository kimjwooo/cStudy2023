#include <stdio.h>

int main(void)
{
	int a;             // int�� ���� ����
	double b;          // double�� ���� ����
	char c;            // char�� ���� ����

	printf("%u, %x, %p\n", &a, &a, &a);			//%p : ������ ������ �ޱ� ���� ������ �ּ�
												//%u : %d���� 2^31�̻��� �Ѿ�� �ּ� ���� ������ �ٲ�� �߸��� ���� ������ ������ unsigned�� ���.

	printf("int�� ������ �ּ� : %u\n", &a);     // �ּ� �����ڷ� �ּ� ���
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %u\n", &c);

	return 0;
}