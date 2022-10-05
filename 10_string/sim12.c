// 문제 12 (문자 함수)
// 다음 문자열 내의 모든 영문자 대문자 변환, toupper함수
#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[] = "Hello C World!";
    int len = 0;

    printf("원래 문자열\n");
    puts(str);

    while(str[len] != '\0')
        len++;

    for(int i = 0; i < len; i++)
        str[i] = toupper(str[i]);

    printf("바뀐 문자열\n");
    puts(str);

    return 0;
}