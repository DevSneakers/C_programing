// 열거형 2
#include<stdio.h>

enum tvtype {tube, lcd, plasma, projection};

int main()
{
    enum tvtype type;

    printf("TV종류 코드를 입력하시오 : ");
    scanf("%d", &type);

    switch (type)
    {
    case tube:
        printf("브라운관 TV 선택\n");
        break;

    case lcd:
        printf("LCD TV 선택\n");
        break;

    case plasma:
        printf("PDP TV 선택\n");
        break;

    case projection:
        printf("프로젝션 TV 선택\n");
        break;

    default:
        printf("다시 선택해주십시오.\n");
        break;
    }
    return 0;
}