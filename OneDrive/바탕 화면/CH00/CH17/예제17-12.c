#include <stdio.h>
// �������� �ڻ�� start..

typedef struct student
{
	int num;
	double grade;
}Student; // ������

struct student
{
	int num;
	double grade;
}Student; // ��? Student.num

struct student
{
	int num;
	double grade;
}s1[5];

typedef struct student Student;      // Student������ ������
void print_data(Student* ps);        // �Ű������� Student���� ������

int main(void)
{
	Student s1 = { 315, 4.2 };       // Student���� ���� ����� �ʱ�ȭ
	s1.grade = 315;
	print_data(&s1);                 // Student�� ������ �ּ� ����

	return 0;
}

void print_data(Student* ps)
{
	printf("�й� : %d\n", ps->num);  // Student �����ͷ� ��� ����
	printf("���� : %.1lf\n", ps->grade);
