#include <stdio.h> 

void fruit(int count);

int main(void)
{
	fruit(1);            // 처음 호출하므로 1을 인수로 준다.

	return 0;
}

void fruit(int count)    // 호출 횟수를 매개변수에 저장
{
	printf("%d apple\n", count); //지역변수로 설정하고 
	if (count == 3) return;		// 호출 횟수가 3이면 반환하고 끝낸다.
	fruit(count + 1);			// 재호출할 때 호출 횟수를 1 증가
}