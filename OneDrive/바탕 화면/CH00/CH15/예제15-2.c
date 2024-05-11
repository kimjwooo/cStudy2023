#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);

int main(void)
{
	char* pa = &"success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);   // 바꾸기 전에 문자열 출력
	swap_ptr(&pa, &pb);                       // 함수 호출
	//swap_ptr(pa,pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);   // 바꾼 후에 문자열 출력

	return 0;
}

//void swap_ptr(char* ppa, char* ppb)		  // 일차원 포인터로 호출하기 - 시험 문제
//{
//  일차원으로 호출하면 pa와 pb에 있는 값을 바꾸는 것(이차원 포인터로 호출)이 아니라 ppa와 ppb의 값을 서로 바꾼 것이다
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

	pt = *ppa;				//일차원 포인터 간의 이동
	*ppa = *ppb;
	*ppb = pt;
}