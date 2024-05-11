#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    FILE* stream;
    long distance;

    stream = fopen("ftell.txt", "w");            // 쓰기모드
    fputs("ABCDEFGHIJ", stream);
    fclose(stream);

    stream = fopen("ftell.txt", "r");             // 읽기모드   // 기존의 파일은 지움

    fseek(stream, -8, SEEK_END);
    fprintf(stdout, "%c \n", fgetc(stream));    // C 출력

    distance = ftell(stream);                   //텍스트 파일 안에 있는 거리를 알려줘~
    printf("거리: %ld \n", distance);             // 거리3
    fclose(stream);

    return 0;
}