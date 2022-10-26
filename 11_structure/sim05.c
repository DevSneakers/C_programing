// 문제 5 구조체 기초
// 구조체 이용, 시간 표현 구조체 정의, 두 개의 시간 차이 출력 프로그램
#include<stdio.h>

struct TIME{
    int seconds;
    int minute;
    int hours;
};

int main()
{
    int diff_h, diff_m, diff_s;
    struct TIME t1, t2;

    printf("시작 시간 (시 분 초) : ");
    scanf("%d %d %d", &t1.hours, &t1.minute, &t1.seconds);
    printf("종료 시간 (시 분 초) : ");
    scanf("%d %d %d", &t2.hours, &t2.minute, &t2.seconds);

    if(t1.seconds > t2.seconds){
        --t2.minute;
        t2.seconds += 60;
    }
    diff_s = t2.seconds - t1.seconds;

    if(t1.minute > t2.minute){
        --t2.hours;
        t2.minute += 60;
    }
    diff_m = t2.minute - t1.minute;
    diff_h = t2.hours - t1.hours;

    printf("소요시간 -> %d : %d : %d\n", diff_h, diff_m, diff_s);

    return 0;
}