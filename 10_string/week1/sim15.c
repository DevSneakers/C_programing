// 문제 15 (문자 함수)
// 문자열 입력받아 알파벳, 숫자 이외 특수기호 개수를 출력 함수 만들고 프로그램 작성
#include<stdio.h>
#include<ctype.h>

void count(char *s);

int main()
{
    char str[100];

    printf("문자열 입력 : ");
    gets(str);
    
    count(str);

    return 0;
}

void count(char *s)
{
    int i = 0, num_alp = 0, num_int = 0, num_else = 0;

    for(i = 0; s[i] != NULL; i++){
        if(isalpha(s[i]))
            num_alp++;
        else if(isdigit(s[i]))
            num_int++;
        else
            num_else++;
    }
    printf("문자열 %s에서 숫자 : %d 개, 알파벳 : %d 개, 특수기호 : %d 개\n", s, num_int, num_alp, num_else);
}