#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[5];
	char copy[80];

	str[0] = 'O';
	str[2] = 'K';
	str[1] = ' ';
	str[3] = '\0';					//���Ṯ��
	//(str + 2) = '\0';				( �߿��� �ڵ� )
	//printf("%s\n", str);
	
	puts("���� �� : ");
	puts(str);

	puts("���� �� : ");
	strcpy(copy,str);

	return 0;
}