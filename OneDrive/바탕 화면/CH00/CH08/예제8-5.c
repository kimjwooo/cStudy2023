#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>            // ���ڿ� ���� �Լ� ������ ��Ƴ��� ��� ����



int main(void)
{
	char str1[80] = "cat";
	char str2[80];
	
	strcpy(str1, "tiger");     // str1 �迭�� "tiger" ���� ( ������ &"tiger"�� ���� ����� ) ( &("tiger"+1)�� ���� ����ϸ� iger�� ����� �� ���� ) 
	//for�� ����ؼ� ��Ÿ������
	//�쿡�� �·� �ؼ� / �������� �纻����
	strcpy(str2, str1);        // str2 �迭�� str1 �迭�� ���ڿ� ����
	printf("%s, %s\n", str1, str2);

	//printf("%s %s %s %s %s")

	return 0;
}