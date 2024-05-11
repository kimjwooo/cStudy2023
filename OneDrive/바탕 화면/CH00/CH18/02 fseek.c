#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    FILE* stream;                               // 포인터 stream
    stream = fopen("seek.txt", "w");            // 쓰기 모드
    fputs("ABCDEFGHIJ", stream);
    fclose(stream);

    stream = fopen("seek.txt", "r");              // 읽기 모드

    fseek(stream, 0, SEEK_SET);
    fprintf(stdout, "%c \n", fgetc(stream));    // A 출력
    fseek(stream, 2, SEEK_SET);
    fprintf(stdout, "%c \n", fgetc(stream));    // C 출력
    fseek(stream, -1, SEEK_END);                // 커서가 다시 마지막으로
    fprintf(stdout, "%c \n", fgetc(stream));    // J 출력
    fseek(stream, -2, SEEK_CUR);                // 커서가 그 앞으로 이동
    fprintf(stdout, "%c \n", fgetc(stream));    // I 출력
    fseek(stream, -2, SEEK_CUR);                // 현재 위치 기준으로  
    fprintf(stdout, "%c \n", fgetc(stream));    // H 출력

    fclose(stream);
    return 0;
}