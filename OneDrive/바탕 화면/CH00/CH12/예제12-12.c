#include <stdio.h>
#include <string.h>

// strcmp 1, 0 ,-1�� ��츦 ��� �ٸ��� ���־�� �� - switch ~ case���� ����Ͽ� ��Ÿ���� ����?

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");
	if (strcmp(str1, str2) == 1)    // str1�� str2���� ũ��(������ ���߿� ������)
		printf("%s\n", str1);      // str1 ���

	else if (strcmp(str1, str2) == 0)
	{
		printf("%s %s", str1, str2);
	}

	else                           // str1�� str2���� ũ�� ������
		printf("%s\n", str2);      // str2 ���
	
	/*int result;
	result = strcmp(str1, str2);

	switch (result)
	{
	case 1:
		break;

	case -1:
		break;

	default:
		break;
	}*/

	return 0;
}