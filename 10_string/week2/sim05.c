// 문제 5(문자열 함수 strcat)
#include<stdio.h>
#include<string.h>

int main()
{
    char str[80];
    printf("파일명 입력 : ");
    gets(str);
    strcat(str, ".txt");
    printf("\n파일명 : %s\n", str);
    return 0;
}