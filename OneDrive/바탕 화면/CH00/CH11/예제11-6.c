#include <stdio.h>

//�� �ڵ� �ϱ� - ���� ����

void my_gets(char* str, int size);

int main(void)
{
	char db[7];                             // ���ڿ��� ������ �迭

	my_gets(db, sizeof(db));               // �� ���� ���ڿ��� �Է��ϴ� �Լ�
	printf("�Է��� ���ڿ� : %s\n", db);     // �Է��� ���ڿ� ���

	return 0;
}

void my_gets(char* str, int size)            // str�� char �迭, size�� �迭�� ũ��			 //char* str = db;			int size = sizeof(db);
{
	int ch;                                  // getchar �Լ��� ��ȯ���� ������ ����
	int i = 0;                               // str �迭�� ÷��

	ch = getchar();                          // ù ��° ���� �Է�
	while ((ch != '\n') && (i < size - 1))   // �迭�� ũ�⸸ŭ �Է�
	{
		str[i] = ch;             // �Է��� ���ڸ� �迭�� ����
		i++;                     // ÷�� ����
		ch = getchar();          // ���ο� ���� �Է�
	}
	str[i] = '\0';               // �Էµ� ���ڿ��� ���� �� ���ڸ� ����
}