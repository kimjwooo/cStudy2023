#include <stdio.h>

int main(void)
{
	int ary[5];

	printf("  ary의 값 : %u\t", ary);        // 주소로서의 배열명의 값
	printf("ary의 주소 : %u\n", &ary);       // 배열의 주소

	printf("   ary + 1 : %u\t", ary + 1);
	printf("  &ary + 1 : %u\n", &ary + 1);

	return 0;
}


int main(void)
{
	char* pary[5];	// 정적 메모리 할당 == 필요한 만큼 할당해놓고 쓰는거ㅓㅓㅓㅓㅓㅓㅓ

	printf("  pary의 값 : %u\t", pary);        // 주소로서의 배열명의 값
	printf("pary의 주소 : %u\n", &pary);       // 배열의 주소

	printf("   pary + 1 : %u\t", pary + 1);
	printf("  &pary + 1 : %u\n", &pary + 1);

	return 0;
}
