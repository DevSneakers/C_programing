// 문자 검색, 문자열 검색
// 문자열 토큰 분리
#include<stdio.h>
#include<string.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";
char *token = NULL;

int main()
{
    token = strtok(s, seps);
    while(token != NULL){
        printf("토큰 : %s\n", token);

        token = strtok(NULL, seps);
    }
    return 0;
}