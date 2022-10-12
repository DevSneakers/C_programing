// 문제 7(문자열 함수)
// 한줄의 문자열 "ABCabc012ABC에서 문자 'c'가 처음 나타나는 위치 인덱스 출력
#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "ABCabc012ABC";
    char *p = NULL;
    int position = 0;
    puts(str);
    p = strchr(str, 'c');
    if(NULL != p){
        position = p - str;
        printf("문자 %c 의 위치 : %d\n", 'c', position);
    }
    return 0;
}