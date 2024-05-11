#include <stdio.h> 

void fruit(void);			// 함수 선언

int cnt=0;					//전역변수 추가

int main(void)
{
	while (1)
	{
		cnt++;
			if (cnt >= 3000) 
				break;
			
		fruit();				// 함수 호출


	}


	return 0;
}

void fruit(void)			// 재귀호출 함수 정의
{
	//cnt++;	
	/*if (cnt > 3000)
		return;			
			*/				// 자신의 메모리가 충분히 감당할 수 있는 값을 알고 그 전까지만 실행하도록 함. (함수에서는 RETURN을 사용)
	printf("apple %d\n",cnt);
	/*fruit();		*/		// 자신을 다시 호출
}