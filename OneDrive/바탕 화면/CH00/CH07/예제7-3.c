#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Լ��� ���� 0,1�� Ÿ���̴�
//get_num �Լ� ����, ���� �ݺ� ����
// if��&break�� Ȱ���ؼ� ���α׷��� ��� ������ �ʰ� ��� �ϰ� @�� ��Ÿ���� ����.

void print_char(char ch, int count);    // �Լ� ����
int get_num(void);

int main(void)

{
	int num;
	int x;
	x=get_num();

	print_char('@', x);                 // ���ڿ� ���ڸ� �ְ� �Լ� ȣ��
	//printf_char('@',get_num()) - ���� �ݺ����� ����ؼ� get_num()�Լ��� ������Ű�� ��� �����ϱ� if "����"���ڿ��� �Է¹����� break
	
	return 0;
}

void print_char(char ch, int count)     // �Ű������� ������ ��ȯ���� ����.
{
	int i;

	for (i = 0; i < count; i++)         // i�� 0���� count-1���� ����, count�� �ݺ�
	{
		printf("%c", ch);               // �Ű����� ch�� ���� ���� ���
	}

	return;								// Ʃ�͸� ���� : return���� �޴� �ִ� ���� ����ϴ� ���ΰ�? �׷��ٸ� main �Լ����� return 0; ���� �ٸ� �ǹ��ΰ�?
}

int get_num(void)                     // �Լ��� ����(�˰���) �Ű������� ���� ��ȯ���� �ִ�.
{
	int num;                          // Ű���� �Է°��� ������ ����

	printf("��� �Է� : \n");			// �Է� �ȳ� �޽���
	scanf("%d", &num);                // Ű���� �Է�

	return num;                       // �Է��� �� ��ȯ  //����� �����ϱ� return ���� �ʿ���
}