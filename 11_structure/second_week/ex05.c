// 열거형 enum
// 요일을 나타내는 열거형 정의
#include<stdio.h>

enum days {MON, TUE, WED, THU, FRI, SAT, SUN};

char *days_name[] = {
    "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"
};

int main()
{
    enum days d;

    for(d = MON; d <= SUN; d++)
        printf("%d번째 요일의 이름은 %s입니다.\n", d, days_name[d]);

    return 0;
}