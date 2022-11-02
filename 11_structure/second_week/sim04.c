// 문제 4 구조체 함수
// 직사각형 구조체를 인자로 받아ㅏ 직사각형 둘레를 구하는 함수 정의
// 직사각형에 대한 정보를 받아 둘레를 출력하는 프로그램
#include<stdio.h>

struct rectangle
{
    int x;
    int y;
    int width;
    int height;
};

typedef struct rectangle RECT;

int GetRectangle(RECT *rect);

int main()
{
    RECT rect;
    int circumference = 0;

    printf("직사각형 좌표 입력 (x, y) : ");
    scanf("%d %d", &rect.x, &rect.y);
    printf("직사각형 폭 입력 : ");
    scanf("%d", &rect.width);
    printf("직사각형 높이 입력 : ");
    scanf("%d", &rect.height);

    printf("\n\n");

    printf("직사각형 원점 좌표 (x, y) = (%d, %d)\n", rect.x, rect.y);
    printf("직사각형 폭 : %d\n", rect.width);
    printf("직사각형 높이 : %d\n", rect.height);
    printf("\n");
    
    circumference = GetRectangle(&rect);

    printf("직사각형 둘레 : %d\n", circumference);

    return 0;
}

int GetRectangle(RECT *rect)
{
    int cir;
    cir = rect->width*2 + rect->height*2;
    return cir;
}
