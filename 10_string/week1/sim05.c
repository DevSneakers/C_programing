// 문제 5 (문자열 처리)
// 문자열의 길이를 계산하는 함수 작성, 문자의 길이 출력하는 프로그램 작성
#include<stdio.h>
#include<string.h>

int my_strlen(char *s);

main()
{
    char str[50];

    printf("문자열 입력 : ");
    gets(str);

    printf("문자열 길이는 %d\n", my_strlen(str));
}

int my_strlen(char *s)
{
    int length = 0;
    while(s[length])
        length++;

    return length;
}