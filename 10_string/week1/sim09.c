// 문제 9 (문자열 배열 -> 문자열 포인터 배열로 처리)
// 본인 이름과 학과 이름을 문자열 포인터 배열에 저장하여 출력
#include<stdio.h>

int main()
{
    char *name[] = {"홍길동", "정보통신공학과"};

    printf("이름 : %s\n", name[0]);
    printf("학과 : %s\n", name[1]);

    return 0;
}