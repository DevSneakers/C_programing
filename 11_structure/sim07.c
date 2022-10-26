// 문제 8 구조체 배열
// 구조체 student 정의, 학생 3명에 대한 구조체 배열 선언, 초기값 초기화, 출력
// 구조체 멤버 구성 이름, 학번, 평점
#include<stdio.h>
#define SIZE 3

struct student
{
    char name[10];
    char num[10];
    double avg;
};

int main()
{
    struct student sin[SIZE] = {
        {"김영국","9952203",4.2},
        {"강미연","9952123",3.5},
        {"최종욱","0052033",3.7}
    };

    printf("\n\n%13s%13s%13s\n\n", "이 름", "학 번", "학 점");

    for(int i = 0; i < SIZE; i++){
        printf("%13s%13s%11.1f\n\n",sin[i].name,sin[i].num,sin[i].avg);
    }
    return 0;
}
