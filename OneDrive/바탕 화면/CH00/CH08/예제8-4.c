#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

int main(void)
{
	char str[MAX] = "applejam";              // 문자열 초기화

	printf("최초 문자열 : % s\n", str);     // %s, 주소정보 필요, 종료문자 있음, 문자열 초기화 문자열 출력
	printf("문자열 입력 : ");
	scanf("%s", str);                       // 새로운 문자열 입력
	printf("입력 후 문자열 : %s\n", str);   // 입력된 문자열 출력
	

	//for (int i = 0; i < MAX; i++)
	//{
	//printf("문자 확인 : %c %x", *(str + i), str + i);//%c 공간을 %x 주소를 나타낼 떄 사용
	//}
	printf("문자 확인 : %c ", *(str + 7));
	return 0;
}