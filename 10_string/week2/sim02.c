// 문제 2 (문자열 함수)
// 문자열 입력받아 문자열에 포함된 공백 문자 삭제
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[100] = {0};
    char t[100] = {0};
    int i, j = 0;
    printf("텍스트 입력 : ");
    gets(s);

    for(i = 0; i <strlen(s); i++){
        if(s[i] != ' ')
            t[j++] = s[i];
    }
    printf("결과 텍스트 : %s\n", t);

    return 0;
}