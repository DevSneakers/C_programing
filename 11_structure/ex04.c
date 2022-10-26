// 구조체를 멤버로 가지는 구조체
#include<stdio.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point p1;
    struct point p2;
};

int main()
{
    struct rect r;
    double w, h, area, peri;

    printf("사각형의 좌상단 좌표 값 입력(x y) : ");
    scanf("%d %d", &r.p1.x, &r.p1.y);
    printf("사각형의 우하단 좌표 값 입력(x y) : ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = r.p2.x - r.p1.x;
    h = r.p2.y - r.p1.y;

    area = w * h;
    peri = 2 * w + 2 * h;

    printf("사각형 면적 : %.1f, 사각형 둘레 : %.1f\n", area, peri);

    return 0;
}