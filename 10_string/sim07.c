// 문제 7 (문자열 처리)
// 두 개의 문자열에 대해 뒤 문자열을 앞의 문자열에 복사하는 함수 및 프로그램 작성
#include<stdio.h>
#include<string.h>

void my_strcpy(char *d, char *s);

main()
{
    char d[12] = "destination ";
    char s[7] = "source";

    my_strcpy(d, s);

    printf("%s\n", d);
}

void my_strcpy(char *d, char *s)
{
    int length = 0;
    while(s[length]){
        d[length] = s[length];
        length++;
    }
    d[length] = '\0';
}