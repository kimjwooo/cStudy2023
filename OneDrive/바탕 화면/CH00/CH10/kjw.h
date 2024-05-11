#pragma once

// 사용자 헤더 라이브러리 재사용하는 것이 시험 문제

//알고리즘 01 10-5,6.c
void print_ary(int* pa, int size)         // 매개변수로 포인터 선언
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);   // pa로 배열 요소 표현식 사용
	}
}

//알고리즘02 10-7.c
void input_ary(double* pa, int size)          // double 포인터를 매개변수로 선언
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++)                // size의 값에 따라 반복 횟수 결정
	{
		scanf("%lf", pa + i);                 // &pa[i]도 가능, 입력할 배열 요소의 주소를 전달
	}
}

//알고리즘03 10-7.c
double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];                              // 첫 번째 배열 요소의 값을 최댓값으로 설정
	for (i = 1; i < size; i++)                // 두 번째 배열 요소부터 max와 비교
	{
		if (pa[i] > max) max = pa[i];         // 새로운 배열 요소의 값이 max보다 크면 대입
	}

	return max;                               // 최댓값 반환
}