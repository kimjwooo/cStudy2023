#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Լ��� ���� 1,0�� Ÿ���̴�. �Է� 0 ��� 1
//�Լ��� �̸��� �Լ��� ���� �ּ�
//�Լ��� ����Ǹ� �Լ��� ������
int get_num(void);                    // �Լ� ���� (�Լ��� ����Ʈ)

int main(void)
{
	int result;
	printf("main() address : %x %x\n", main, &result);
	result = get_num();               // �Լ� ȣ��, ��ȯ���� result�� ����
	printf("��ȯ�� : %d\n", result);  // ��ȯ�� ���
	return 0;
}
// int result;
// printf("%d",get_num());

int get_num(void)                     // �Լ��� ����(�˰���) �Ű������� ���� ��ȯ���� �ִ�.
{
	int num;                          // Ű���� �Է°��� ������ ����

	printf("get_num() address : %x %x\n", get_num, &num);
	printf("��� �Է� : \n");			// �Է� �ȳ� �޽���
	scanf("%d", &num);                // Ű���� �Է�

	return num;                       // �Է��� �� ��ȯ  //����� �����ϱ� return ���� �ʿ���
}