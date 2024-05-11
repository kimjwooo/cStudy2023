#include <stdio.h>

int main(void)				 // 등비수열, 등차수열 만들어보기 + 디버깅으로 반복문 실행 과정 보기
{
	int a = 1;               // 변수를 선언하고 곱셈을 하기 위해 1로 '초'기화
	int cnt = 0;			 // 횟수 계산
	while (a < 10)           // ① a가 10보다 작으므로 조건식은 참
							 // while(1) <- 무한 반복 루프 break;를 사용하여 탈출
	{
		cnt++;				 //몇 번째 실행되고 있는 것인지 구하는 코드

		a = a * 2;           // ② a에 2를 곱해 a에 다시 저장
	}
	printf("a : %d, cnt : %d\n", a,cnt);   // a, cnt 값 출력

	//a가 8까지만 출력되게 하고 싶음. break;를 사용해서 - 시험문제

	return 0;
}