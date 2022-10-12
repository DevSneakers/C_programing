// 문제 8 (문자열 함수)
// 문자열에서 'abc'가 존재하면 해당 위치 인덱스 출력
#include<stdio.h>
#include<string.h>

int main()
{
    char str_source[] = "ABCabc012ABC";
    char *p = NULL;
    int position = 0;
    puts(str_source);
    p = strstr(str_source, "abc");
    if(NULL != p){
        position = p - str_source;
        printf("문자열 %s의 위치 : %d\n", "abc", position);
    }
    else
        printf("문자열 %s 찾기에 실패\n", "abc");
    return 0;
}