// 문제 2 구조체 포인터
// 선의 시작점, 끝점을 멤버로 같는 line구조체 정의
// line구조체 포인터 선언, 시작점과 끝점의 좌표 입력받아 선의 길이를 구해 출력
#include<stdio.h>
#include<math.h>

struct line{
    double start[2];
    double end[2];
};

typedef struct line LINE;

int main()
{
    double length = 0;
    double lengthX = 0;
    double lengthY = 0;

    LINE *linestart;
    LINE *lineend;

    printf("시작점 좌표 입력 : ");
    scanf("%lf %lf", &linestart->start[0], &linestart->start[1]);

    printf("끝점 좌표 입력 : ");
    scanf("%lf %lf", &lineend->end[0], &lineend->end[1]);

    lengthX = lineend->end[0] - linestart->start[0];
    lengthY = lineend->end[1] - linestart->start[1];

    printf("선분 X의 길이 : %.2lf\n", lengthX);
    printf("선분 Y의 길이 : %.2lf\n", lengthY);

    length = sqrt(lengthX*lengthX + lengthY*lengthY);

    printf("시작점과 끝점 사이 길이 : %.2lf\n", length);

    return 0;
}