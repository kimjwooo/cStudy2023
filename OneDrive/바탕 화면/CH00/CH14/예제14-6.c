#include <stdio.h>

int main(void)
{
	char* pary[5];           // 포인터 배열 선언. pointer와 array의 약어로 pary
	int i;                   // 반복 제어 변수

	pary[0] = "dog";         // 배열 요소에 문자열 대입
	pary[1] = "elephant";	 // & 생략되어 있음 &"elephant"
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)  // i는 0부터 4까지 5번 반복
	{
		printf("%s\n", pary[i]);  // 배열 요소를 사용하여 모든 문자열 출력
	}

	printf("%c\n", *(pary[0] + 1));			// 시험 문제 : o를 카운트하시오. (반복문을 돌려서 설정, 함수 활용, 정적·동적 변수 활용)

	return 0;
}