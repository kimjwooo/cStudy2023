#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수의 유형 1,0의 타입이다. 입력 0 출력 1
//함수의 이름은 함수의 시작 주소
//함수가 종료되면 함수는 지워짐
int get_num(void);                    // 함수 선언 (함수의 리스트)

int main(void)
{
	int result;
	printf("main() address : %x %x\n", main, &result);
	result = get_num();               // 함수 호출, 반환값은 result에 저장
	printf("반환값 : %d\n", result);  // 반환값 출력
	return 0;
}
// int result;
// printf("%d",get_num());

int get_num(void)                     // 함수의 정의(알고리즘) 매개변수가 없고 반환형만 있다.
{
	int num;                          // 키보드 입력값을 저장할 변수

	printf("get_num() address : %x %x\n", get_num, &num);
	printf("양수 입력 : \n");			// 입력 안내 메시지
	scanf("%d", &num);                // 키보드 입력

	return num;                       // 입력한 값 반환  //출력이 있으니까 return 문을 필요함
}