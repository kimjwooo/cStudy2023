#include <stdio.h>

int main(void)
{
	int ary[5];

	printf("  ary�� �� : %u\t", ary);        // �ּҷμ��� �迭���� ��
	printf("ary�� �ּ� : %u\n", &ary);       // �迭�� �ּ�

	printf("   ary + 1 : %u\t", ary + 1);
	printf("  &ary + 1 : %u\n", &ary + 1);

	return 0;
}


int main(void)
{
	char* pary[5];	// ���� �޸� �Ҵ� == �ʿ��� ��ŭ �Ҵ��س��� ���°Ťääääää�

	printf("  pary�� �� : %u\t", pary);        // �ּҷμ��� �迭���� ��
	printf("pary�� �ּ� : %u\n", &pary);       // �迭�� �ּ�

	printf("   pary + 1 : %u\t", pary + 1);
	printf("  &pary + 1 : %u\n", &pary + 1);

	return 0;
}
