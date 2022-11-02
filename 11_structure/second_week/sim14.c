// 문제 14 열거형
// 열거형 사용, 이동할곳을 입력받아 switch로 이동할 곳을 골라 출력
#include<stdio.h>
enum location {city, school, hospital};

int main()
{
    int to_loc;
    printf("1. 도시, 2. 학교, 3. 병원\n");
    printf("이동할 곳 입력 : ");
    scanf("%d", &to_loc);
    
    switch (to_loc-1)
    {
    case city:
        printf("도시로 이동했습니다.\n");
        break;
    case school:
        printf("학교로 이동했습니다.\n");
        break;
    case hospital:
        printf("병원으로 이동했습니다\n");
        break;
    default:
        printf("잘못된 입력입니다.\n");
        break;
    }
    return 0;
}