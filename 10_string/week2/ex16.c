// 문자열 -> 수치
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    double d;

    i = atoi("100");
    printf("%d\n", i);

    d = atof("36.5");
    printf("%f\n", d);

    return 0;
}