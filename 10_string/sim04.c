// 문제 4 (문자열 처리) 임의의 문자열에 대해 중간부분의 문자열을 교체하는 함수를 작성
// 이 함수를 이용해 임의의 문자열에 대해 중간부분의 문자열 교체하는 프로그램
#include<stdio.h>
#include<string.h>

void replace(int num1, int num2, char *s1, char *s2);

main()
{
    int num1, num2;
    char str1[50], str2[50];

    printf("문자열 입력 : ");
    gets(str1);

    printf("문자열 시작 위치 입력 : ");
    scanf("%d", &num1);

    printf("문자열 길이 입력 : ");
    scanf("%d", &num2);

    printf("문자열 입력 : ");
    scanf("%s", str2);

    replace(num1, num2, str1, str2);
}

void replace(int num1, int num2, char *s1, char *s2)
{
    for(int i = 0; i < num2; i++){
        s1[num1+i] = s2[i];
    }
    printf("대치된 문자열 -> %s\n", s1);
}