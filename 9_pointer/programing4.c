#include<stdio.h>

void get(double value, int* i_part, double* f_part);

main()
{
    double val = 3.14;

    int i = 0;
    double f = 0.0;

    get(val, &i, &f);

    printf("정수부 = %d\n", i);
    printf("실수부 = %lf\n", f);
}

void get(double value, int* i_part, double* f_part)
{
    *i_part = (int)value;
    *f_part = value - (int)value;
}