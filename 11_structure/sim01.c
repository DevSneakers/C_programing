// 문제 1 구조체 기초
// 구조체 이용 사각형 표현할 수 있는 구조체 정의, 초기값 부여, 사각형의 면적을 출력
#include<stdio.h>

struct rect{
    int width;
    int height;
};

int main()
{
    struct rect r;
    int area = 0;
    r.width = 100;
    r.height = 20;

    area = r.width * r.height;

    printf("넓이 : %d, 높이 : %d, 면적 : %d\n", r.width, r.height, area);

    return 0;
}