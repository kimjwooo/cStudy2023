#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age;                  // 나이를 저장할 변수
	char name[20];            // 이름을 저장할 배열

	printf("나이 입력 : ");
	scanf("%d", &age);        // scanf 함수로 나이 입력 //엔터로 인한 종료 문자 인식 오류
	//getchar();
	fgetc(stdin);			  // getchar,fgetc 둘 중 하나 사용
							  

	printf("이름 입력 : ");
	gets(name);               // gets 함수로 이름 입력
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;
}