#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수의 유형 0,1의 타입이다
//get_num 함수 재사용, 무한 반복 루프
// if문&break문 활용해서 프로그램을 계속 죽이지 않고 계속 하고 @를 나타내고 싶음.

void print_char(char ch, int count);    // 함수 선언
int get_num(void);

int main(void)

{
	int num;
	int x;
	x=get_num();

	print_char('@', x);                 // 문자와 숫자를 주고 함수 호출
	//printf_char('@',get_num()) - 무한 반복문을 사용해서 get_num()함수를 변형시키고 계속 진행하기 if "종료"문자열을 입력받으면 break
	
	return 0;
}

void print_char(char ch, int count)     // 매개변수는 있으나 반환형은 없다.
{
	int i;

	for (i = 0; i < count; i++)         // i는 0부터 count-1까지 증가, count번 반복
	{
		printf("%c", ch);               // 매개변수 ch에 받은 문자 출력
	}

	return;								// 튜터링 질문 : return으로 받는 주는 값을 출력하는 것인가? 그렇다면 main 함수에서 return 0; 과는 다른 의미인가?
}

int get_num(void)                     // 함수의 정의(알고리즘) 매개변수가 없고 반환형만 있다.
{
	int num;                          // 키보드 입력값을 저장할 변수

	printf("양수 입력 : \n");			// 입력 안내 메시지
	scanf("%d", &num);                // 키보드 입력

	return num;                       // 입력한 값 반환  //출력이 있으니까 return 문을 필요함
}