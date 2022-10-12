// 문제 10
// 정수 형태 문자열 입력받아 정수로 바꾸어 출력 (atoi 함수)
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char line[81];
    printf("정수형 문자열 입력 : ");
    gets(line);
    printf("문자열로 입력 받음 : %s\n\n", line);
    printf("함수 atoi()를 이용, 입력한 문자열을 정수로 변환 : %d\n", atoi(line));
    return 0;
}