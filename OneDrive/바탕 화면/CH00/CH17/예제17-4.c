#include <stdio.h>

struct student       // �л� ����ü ����
{
	int id;          // �й�
	char name[20];   // �̸�
	double grade;    // ����
};

int main(void)
{
	struct student s[3] = { {315, "ȫ�浿", 2.4},   // ����ü ���� ����� �ʱ�ȭ
							{ 316, "�̼���", 3.7 },
							{ 317, "�������", 4.4 }
							};

	struct student max;					   // �ְ� ������ ������ ����ü ����

	// for������ �����
	max = s[0];							   // s1�� �ְ� �������� ����
	if (s[1].grade > max.grade) max = s[1];    // s2�� �� ������ max�� ����
	if (s[2].grade > max.grade) max = s[2];    // s3�� �� ������ max�� ����

	printf("�й� : %d\n", max.id);         // �ְ� ���� �л��� �й� ���
	printf("�̸� : %s\n", max.name);       // �ְ� ���� �л��� �̸� ���
	printf("���� : %.1lf\n", max.grade);   // �ְ� ���� �л��� ���� ���

	return 0;
}