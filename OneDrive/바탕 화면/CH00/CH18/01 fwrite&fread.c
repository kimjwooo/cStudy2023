#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
    int buffer1[5] = { 0x41, 0x42, 0x43, 0x44, 0x45 };      //16진수는 binary 16진수로 A B C D E
    //int buffer1[5] = { 65, 66, 67, 68, 69 };
    int buffer2[5];
    
   /* char buffer1[5] = { 'A','B','C','D','\0' };
    char buffer2[5];*/

    FILE* stream;
    stream = fopen("student.dat", "wb");     // 바이너리 모드, 쓰기 모드
    fwrite(buffer1, sizeof(int), 5, stream);
    //fwrite(buffer1, sizeof(char), 5, stream);
    fclose(stream);

    stream = fopen("student.dat", "rb");     // 바이너리 모드, 읽기 모드
    fread(buffer2, sizeof(int), 5, stream);
    //fread(buffer2, sizeof(char), 5, stream);
   
    printf("%d\n",strlen(buffer1));         //strlen(buffer1)이 1이 출력됨
    printf("%x %x %x %x %x \n", buffer2[0], buffer2[1], buffer2[2], buffer2[3], buffer2[4]);
    printf("%d %d %d %d %d \n", buffer2[0], buffer2[1], buffer2[2], buffer2[3], buffer2[4]);
    printf("%c %c %c %c %c \n", buffer2[0], buffer2[1], buffer2[2], buffer2[3], buffer2[4]);

    fclose(stream);
    return 0;
}
