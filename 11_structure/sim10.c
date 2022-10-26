// 문제 10 구조체 배열
// 학번 국어 영어 수학점수 입력 구조체, 평균 출력
#include<stdio.h>
#define SIZE 3
struct score
{
    int id;
    int korean;
    int english;
    int math;
};

int main()
{
    double avg;
    struct score student[SIZE];
    for(int i = 0; i < SIZE; i++){
        printf("%d번째 학생의 학번 입력 : ", i + 1);
        scanf("%d", &student[i].id);
        printf("%d번째 학생의 국어점수 입력 : ", i + 1);
        scanf("%d", &student[i].korean);
        printf("%d번째 학생의 영어점수 입력 : ", i + 1);
        scanf("%d", &student[i].english);
        printf("%d번째 학생의 수학점수 입력 : ", i + 1);
        scanf("%d", &student[i].math);
        printf("\n");
    }
    for(int i = 0; i < SIZE; i++){
        avg = (student[i].korean + student[i].english + student[i].math)/SIZE;
        printf("%d번째 학생의 평균은 %g\n", i+1, avg);
    }
    return 0;
}
