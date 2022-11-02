// 문제 10 공용체
// 캔디 스낵 인형을 한꺼번에 표현할 공용체
// 공용체 사용 인형에 곰인형 저장하고 출력
#include<stdio.h>
#include<string.h>

union Box
{
    short candy;
    float snack;
    char doll[8];
};

int main()
{
    union Box b1;
    printf("%d\n", sizeof(b1));
    strcpy(b1.doll, "bear");
    printf("%d\n", b1.candy);
    printf("%f\n", b1.snack);
    printf("%s\n", b1.doll);

    return 0;
}
