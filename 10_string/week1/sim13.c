// 문제 13 (문자 함수)
// 문자열 입력받아 문자열 중 영문자의 개수 출력
#include<stdio.h>
#include<ctype.h>

int main()
{
    int i = 0, num = 0;
    char str[50];

    printf("문자열 입력 : ");
    gets(str);

    while(str[i]){
        if(isalpha(str[i]))
            num++;
        i++;
    }
    printf("영문자 개수 : %d\n", num);

    return 0;
}