// 문제 4 구조체 기초
// 구조체 이용, 점 표현 구조체 정의, 기본값 초기화, 두 점이 같은지 비교해 출력
#include<stdio.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p1, p2;
    p1.x = 1;
    p1.y = 2;
    p2.x = 1;
    p2.y = 2;
    if(p1.x == p2.x && p1.y == p2.y)
        printf("일치\n");
    else
        printf("불일치\n");
    return 0;
}
