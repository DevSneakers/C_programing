// 문제 4 (strcpy())
#include<stdio.h>
#include<string.h>

int main()
{
    char buf[255];
    char copy[255];
    printf("문자열 입력 : ");
    gets(buf);
    printf("\n입력 문자열 : %s\n", buf);
    strcpy(copy, buf);
    printf("복사 문자열 : %s\n", copy);
    return 0;
}