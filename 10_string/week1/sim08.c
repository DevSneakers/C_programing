// 문제 8 (문자열 처리)
// 다음 두 개의 문자열을 합치는 함수 작성 및 프로그램 작성
#include<stdio.h>
#include<string.h>

void my_strcat(char *d, char *s);

int main()
{
    char d[15] = "love";
    char s[6] = "holic";

    my_strcat(d, s);

    printf("%s\n", d);

    return 0;
}

void my_strcat(char *d, char *s)
{
    int len = 0;
    while (d[len])
        len++;
    while(*s)
        *(d+len++) = *s++;
}