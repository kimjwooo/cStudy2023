#include <stdio.h>
#include <string.h>

// strcmp 1, 0 ,-1인 경우를 모두 다르게 해주어야 함 - switch ~ case문을 사용하여 나타내어 볼까?

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str1, str2) == 1)    // str1이 str2보다 크면(사전에 나중에 나오면)
		printf("%s\n", str1);      // str1 출력

	else if (strcmp(str1, str2) == 0)
	{
		printf("%s %s", str1, str2);
	}

	else                           // str1이 str2보다 크지 않으면
		printf("%s\n", str2);      // str2 출력
	
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