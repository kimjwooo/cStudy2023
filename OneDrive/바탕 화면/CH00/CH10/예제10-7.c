#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "kjw.h"

// find_min 시험 문제

//void input_ary(double* pa, int size);
//double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;                               // 최댓값을 저장할 변수
	int size = sizeof(ary) / sizeof(ary[0]);  // 배열 요소의 개수 계산

	input_ary(ary, size);                     // 배열에 값 입력
	max = find_max(ary, size);                // 배열의 최댓값 반환
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}
