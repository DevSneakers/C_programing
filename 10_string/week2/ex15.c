// 문자열 <-> 수치
#include<stdio.h>

int main()
{
    char s1[] = "100";
    char s2[] = "12.93";
    char buffer[100];

    int i;
    double d;
    double result;

    sscanf(s1, "%d", &i);
    sscanf(s2, "%lf", &d);

    result = i + d;

    sprintf(buffer, "%f", result);

    printf("연산 결과 : %s\n", buffer);

    return 0;
}