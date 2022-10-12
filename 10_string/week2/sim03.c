// 문제 3

#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define LINENUM 81

int main()
{
    int i, len;
    char line[LINENUM];
    printf("영문 문장을 입력 : \n");
    gets(line);
    len = strlen(line);

    printf("입력한 문자열의 대소문자를 변환 ->\n");
    for(i = 0; i < len; i++){
        if('A' <= line[i] && 'Z' >= line[i])
            line[i] = tolower(line[i]);
        else if('a' <= line[i] && 'z' >= line[i])
            line[i] = toupper(line[i]);
        printf("%c", line[i]);
    }
    printf("\n");

    return 0;
}