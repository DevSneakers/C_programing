// 문제 5 구조체 함수
// 두 개의 복소수를 빼는 함수를 작성, 두 개의 복소수 뺄셈 프로그램
#include<stdio.h>

struct complex
{
    double real;
    double imag;
};

void get_input(struct complex *px);

struct complex complex_sub(struct complex x, struct complex y);

int main()
{
    struct complex x, y, z;
    
    printf("첫번째 복소수 입력 (a + bi) : ");
    get_input(&x);

    printf("두번째 복소수 입력 (a + bi) : ");
    get_input(&y);

    z = complex_sub(x, y);

    printf("두 복소수 뺄셈 결과 : %.1f + %.1fi\n", z.real, z.imag);

    return 0;
}

void get_input(struct complex *px)
{
    scanf("%lf", &(px->real));
    scanf("%lf", &(px->imag));
}

struct complex complex_sub(struct complex x, struct complex y)
{
    struct complex z;
    z.real = x.real - y.real;
    z.imag = x.imag - y.imag;
    return z;
}
