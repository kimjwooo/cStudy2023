#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100
#define PI 3.14
//�������� ǥ�� ��� �˾Ƶα�
//���ڿ��� �Ǽ������� �������� ��� �ؾߵ���? - ���ڿ� ��ü�� �Ǽ������� �ް� �ؾ� ��!

void student(int*, int);

int main(void)
{
    double circle_length[MAX];        // �Ϲ� ���� ���� -> 400�� ����Ʈ 
    double* pa;      // ������ ����
    int i;

    //pa = &a[0];      // pa = a;
    pa = circle_length;

    for (i = 0; i < MAX; i++)
        (double) *(pa + i) = i * PI;        //������ ���� pa[i]=i;, 
    //i�� r�� �����ϰ�. ���� �ѷ� ���ϴ� �� (��, i�� �����̴�.)

    for (i = 0; i < MAX; i++)
        printf("%.2lf %.2lf \n", *(pa + i), pa[i]);
    //���ڰ� �ƴ� int���̹Ƿ� ���Ṯ�ڰ� ����

    student(circle_length, MAX);    //�л����� �ڵ带 �����Ѵ�.
    return 0;
}

void student(int* p, int cnt)
{
    int i;
    //int student[MAX];

    /*for (i = 0; i < cnt; i++)
       student[i] = *(p + i);*/

    for (i = 0; i < cnt; i++)
        printf("%d", p[i]);

}