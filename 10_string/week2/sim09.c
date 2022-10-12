// 문제 9 (문자열 함수)
// 문자열에서 특정 단어가 몇개인지 계산하는 함수 (strstr이용)
#include<stdio.h>
#include<string.h>

int count(char *s, char *d);

int main()
{
    char str[80], letter[10];
    printf("문자열 입력 : ");
    gets(str);
    printf("특정 단어 입력 : ");
    scanf("%s", letter);
    printf("특정 단어 %s는 문자열 %s에 총 %d개 존재\n", letter, str, count(str, letter));
    return 0;
}

int count(char *s, char *d)
{
    int num = 0;
    while(s){
        if(s = strstr(s, d)){
            num++;
            s++;
        }
    }
    return num;
}