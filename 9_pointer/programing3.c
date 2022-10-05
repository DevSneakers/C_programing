#include<stdio.h>
#include<math.h>

void quadratic(int a, int b, int c, double* xplus, double* xminus);

main()
{
    int a, b, c;
    double pxplus;
    double pxminus;

    printf("이차방정식의 계수를 입력\n");
    printf("ex) a x^2 + b x + c\n");
    
    while(1){
        printf("a b c 입력 : ");
        scanf("%d %d %d", &a, &b, &c);

        if(a == 0){
            printf("a는 0이 아니어야합니다\n");
            continue;
        }
        else{
            break;
        }
    }
    /*
    printf("a b c 입력 : ");
    scanf("%d %d %d", &a, &b, &c);
    */
    
    quadratic(a, b, c, &pxplus, &pxminus);

    printf("첫번째 실근 : %lf\n", pxplus);
    printf("두번째 실근 : %lf\n", pxminus);
}

void quadratic(int a, int b, int c, double* xplus, double* xminus)
{
    *xminus = (-b - sqrt(b * b - 4 * a * c))/ (2 * a);
    *xplus = (-b + sqrt(b * b - 4 * a * c))/ (2 * a);
}