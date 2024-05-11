#include <stdio.h>

int main(void)
{
	int a = 1;                   // 변수를 선언하고 1로 초기화
	int i;                       // 반복 횟수를 세기 위한 변수

	for (i = 0; i < 3; i++)      // ① i는 0으로 초기화된 후에 ② 3보다 작은 동안(i < 3) <-초조증
								 // for 함수에서는 조건이 1이거나 비어있으면(for (; ;)) 무한 반복 루프	break; 꼭 사용
								 // 1 - 2 - 3 - 4 - 2 - 3 - 4
	{                            // ③ 실행문을 실행
		a = a * 2;               // ④ 하나씩 증가하면서(i++)
		printf(" % d", i);
	}
	printf("a : %d\n", a);       // for문을 빠져나오면 a 값 출력

	return 0;
}