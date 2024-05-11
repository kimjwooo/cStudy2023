#include <stdio.h>

int main(void)
{
	int ary[5];

	//%d로 바꿨을 때 차이가 나는 이유

	printf("  ary의 값 : %u\t", ary);        // 주소로서의 배열명의 값 정적 메모리 할당
	printf("   ary + 1 : %u\n", ary + 1);	 // 다음 필드
	
	printf("  ary의 주소 : %u\t", &ary);     // 배열의 주소
	printf("  &ary + 1 : %u\n", &ary + 1);	 // 다음 DB

	return 0;
}