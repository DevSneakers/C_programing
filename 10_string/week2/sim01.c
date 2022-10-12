// 문제 1(문자열 함수)
// 문자열 입력받아 문자열의 길이를 구하는 프로그램
#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int len;
    printf("문자열 입력 : ");
    gets(str);
    len = strlen(str);
    printf("글자 수 : %d\n", len);
    return 0;
}