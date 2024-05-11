#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>            // 문자열 관련 함수 원형을 모아놓은 헤더 파일



int main(void)
{
	char str1[80] = "cat";
	char str2[80];
	
	strcpy(str1, "tiger");     // str1 배열에 "tiger" 복사 ( 원래는 &"tiger"와 같이 써야함 ) ( &("tiger"+1)과 같이 사용하면 iger을 출력할 수 있음 ) 
	//for문 사용해서 나타내보기
	//우에서 좌로 해석 / 원본에서 사본으로
	strcpy(str2, str1);        // str2 배열에 str1 배열의 문자열 복사
	printf("%s, %s\n", str1, str2);

	//printf("%s %s %s %s %s")

	return 0;
}