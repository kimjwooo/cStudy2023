#include <stdio.h>

void print_line(void);                // �Լ� ����

//�Լ� Ÿ�� : 0,0

int main(void)
{
	print_line();                     // �Լ� ȣ��
	printf("�й�     �̸�     ����     ����\n");
	print_line();                     // �Լ� ȣ��

	return 0;
}

void print_line(void)
{
	int i;

	//for (i = 0; i < 50; i++)          // 50�� �ݺ��Ͽ� '-' ���
	for (i = 0; ; i++)			//���� �ݺ�
	{
		if (i >= 50)
			break;
		printf("-");
	}
	printf("\n");
}