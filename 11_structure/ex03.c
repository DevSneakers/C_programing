// 점들 간 거리 계산
#include<stdio.h>
#include<math.h>

struct point{
    int x;
    int y;
};

int main()
{
    struct point p1, p2;

    double xdiff, ydiff;
    double dist;

    printf("첫번째 점 좌표 입력(x y) : ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("두번째 점 좌표 입력(x y) : ");
    scanf("%d %d", &p2.x, &p2.y);

    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    dist = sqrt(xdiff*xdiff + ydiff*ydiff);

    printf("두 점 사이 거리 : %lf\n", dist);

    return 0;
}