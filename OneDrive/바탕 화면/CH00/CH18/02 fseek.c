#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    FILE* stream;                               // ������ stream
    stream = fopen("seek.txt", "w");            // ���� ���
    fputs("ABCDEFGHIJ", stream);
    fclose(stream);

    stream = fopen("seek.txt", "r");              // �б� ���

    fseek(stream, 0, SEEK_SET);
    fprintf(stdout, "%c \n", fgetc(stream));    // A ���
    fseek(stream, 2, SEEK_SET);
    fprintf(stdout, "%c \n", fgetc(stream));    // C ���
    fseek(stream, -1, SEEK_END);                // Ŀ���� �ٽ� ����������
    fprintf(stdout, "%c \n", fgetc(stream));    // J ���
    fseek(stream, -2, SEEK_CUR);                // Ŀ���� �� ������ �̵�
    fprintf(stdout, "%c \n", fgetc(stream));    // I ���
    fseek(stream, -2, SEEK_CUR);                // ���� ��ġ ��������  
    fprintf(stdout, "%c \n", fgetc(stream));    // H ���

    fclose(stream);
    return 0;
}