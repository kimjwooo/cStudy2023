#include <stdio.h>
#include "kjw.h"

//void print_ary(int* pa);        // 함수 선언
//int ary[5] = { 10, 20, 30, 40, 50 };	// 전역 배열로 설정을 많이 하면 메모리 소모가 큼
		// printf("%d", ary[i]);	//전역 배열의 사용

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary, sizeof(ary) / sizeof(int));             // 배열명을 주고 함수 호출

	return 0;
}
