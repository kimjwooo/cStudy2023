#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100
#define PI 3.14
//포인터의 표시 방식 알아두기
//문자열에 실수형으로 넣으려면 어떻게 해야되지? - 문자열 자체를 실수형으로 받게 해야 함!

void student(int*, int);

int main(void)
{
    double circle_length[MAX];        // 일반 변수 선언 -> 400만 바이트 
    double* pa;      // 포인터 선언
    int i;

    //pa = &a[0];      // pa = a;
    pa = circle_length;

    for (i = 0; i < MAX; i++)
        (double) *(pa + i) = i * PI;        //데이터 쓰기 pa[i]=i;, 
    //i를 r로 생각하고. 원의 둘레 구하는 것 (단, i는 지름이다.)

    for (i = 0; i < MAX; i++)
        printf("%.2lf %.2lf \n", *(pa + i), pa[i]);
    //문자가 아닌 int형이므로 종료문자가 없음

    student(circle_length, MAX);    //학생에게 코드를 전달한다.
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