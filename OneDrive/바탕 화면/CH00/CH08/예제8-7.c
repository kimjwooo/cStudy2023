#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[5];
	char copy[80];

	str[0] = 'O';
	str[2] = 'K';
	str[1] = ' ';
	str[3] = '\0';					//종료문자
	//(str + 2) = '\0';				( 중요한 코드 )
	//printf("%s\n", str);
	
	puts("복사 전 : ");
	puts(str);

	puts("복사 후 : ");
	strcpy(copy,str);

	return 0;
}