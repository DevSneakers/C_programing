// 구조체 연습
#include<stdio.h>
#include<string.h>
struct student
{
    int number;
    char name[10];
    double grade;
};

int main()
{
    struct student s;
    
    s.number = 20170001;
    strcpy(s.name, "홍길동");
    s.grade = 4.3;

    printf("학번 : %d\n", s.number);
    printf("성명 : %s\n", s.name);
    printf("학점 : %lf\n", s.grade);

    return 0;
}