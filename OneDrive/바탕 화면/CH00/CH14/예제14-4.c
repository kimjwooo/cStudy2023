#include <stdio.h>

int main(void)
{
	char animal1[5][10] = {         // 문자 상수로 하나씩 초기화
		{'d', 'o', 'g', '\0'},
		{'t', 'i', 'g', 'e', 'r', '\0'},
		{'r', 'a', 'b', 'b', 'i', 't', '\0'},
		{'h', 'o', 'r', 'c', 'e', '\0'},
		{'c', 'a', 't', '\0'}
	};
	// 문자열 상수로 한 행씩 초기화, 행의 수 생략 가능
	char animal2[][10] = { "dog", "tiger", "rabbit", "horse", "cat" };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%s ", *(animal1+i)); // 주소의 또다른 표현 == animal1[i]
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal2[i]+2); // 두 칸 밀어서 출력
	}

	return 0;
}