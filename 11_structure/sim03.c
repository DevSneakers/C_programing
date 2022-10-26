// 문제 3 구조체 기초
// 구조체 이용 메일 표현 구조체 정의, 초기값 부여, 출력
#include<stdio.h>
#include<string.h>

struct email{
    char title[100];
    char receiver[50];
    char sender[50];
    char content[81];
    char date[100];
    int priority;
};

int main()
{
    struct email e;
    strcpy(e.title, "자료 송부에 관한 건");
    strcpy(e.receiver, "5082tngkr@sch.ac.kr");
    strcpy(e.sender, "5082tngkr@sch.ac.kr");
    strcpy(e.content, "자료 송부하오니 확인 바랍니다.");
    strcpy(e.date, "2022.10.26");
    e.priority = 1;
    
    printf("%s\n %s\n %s\n\n%s\n\n%s\n%d\n",e.title,e.receiver,e.sender,e.content,e.date,e.priority);

    return 0;
}