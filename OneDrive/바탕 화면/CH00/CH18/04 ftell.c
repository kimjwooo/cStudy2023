#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    FILE* stream = fopen("ftell.txt", "rb");
    fseek(stream, 0, SEEK_END);
    printf("ftell.txt 파일의 크기 : %d 바이트\n", ftell(stream));   //맨끝에서부터 세서 파일의 크기를 알려줘
    fclose(stream);

    return 0;
}
