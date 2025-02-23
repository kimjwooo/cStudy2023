#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 포인터 배열은 주소를 저장하는 배열, 다차원 배열 차원이 달라도 배열의 시작 주소는 배열의 이름이다.

int main(void)
{
	int score[3][4];          // 3명의 네 과목 점수를 저장할 2차원 배열 선언
	int total;                // 총점
	double avg;               // 평균
	int i, j;                 // 반복 제어 변수

	for (i = 0; i < 3; i++)               // 학생 수만큼 반복					// 행과 열을 sizeof 연산자로 나타내기
	{
		printf("4과목의 점수 입력 : ");   // 입력 안내 메시지
		for (j = 0; j < 4; j++)           // 과목 수만큼 반복
		{
			scanf("%d", &score[i][j]);    // 점수 입력
		}
	}

	for (i = 0; i < 3; i++)               // 학생 수 만큼 반복
	{
		total = 0;                        // 학생이 바뀔 때마다 0으로 초기화
		for (j = 0; j < 4; j++)           // 과목 수 만큼 반복
		{
			total += score[i][j];         // 학생별로 총점 누적
		}
		avg = total / 4.0;                // 평균 계산
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);   // 총점, 평균 출력
	}

	printf("%x %x %x \n", score, &score[0][0], score[0]);
	printf("%d %d %d \n", sizeof(score), sizeof(&score[0][0]), sizeof(score[0]));
	printf("%d %d %d \n", *(score[0]+2), score[0][2], *(*(score+0)+2));		// ????

	return 0;
}