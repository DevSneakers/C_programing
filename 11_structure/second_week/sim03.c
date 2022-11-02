// 문제 3 구조체 함수
// 선의 시작과 끝을 멤버로 갖는 line 구조체 선언
#include<stdio.h>
struct line
{
    double start[2];
    double end[2];
};

typedef struct line LINE;

int isEqual(LINE *lineStart, LINE *lineEnd);

int main()
{
    int result = 0;
    LINE lineStart;
    LINE lineEnd;

    printf("시작점 좌표 입력 : ");
    scanf("%lf %lf", &lineStart.start[0], &lineStart.start[1]);

    printf("끝점 좌표 입력 : ");
    scanf("%lf %lf", &lineEnd.end[0], &lineEnd.end[1]);

    result = isEqual(&lineStart, &lineEnd);

    if(result == 1)
        printf("두 점 좌표 동일\n");
    else
        printf("두 점 좌표 다름\n");
    return 0;
}

int isEqual(LINE *lineStart, LINE *lineEnd)
{
    if((lineStart->start[0] == lineEnd->end[0] && lineStart->start[1] == lineEnd->end[1]))
        return 1;
    else
        return 0;
}
