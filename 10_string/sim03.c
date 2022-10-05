// 문제 3 (문자열 처리) 임의의 문자열에 대해 중간 부분으 문자열을 반환하는 함수를 작성하고 이 함수를 이용하여 임의의 문자열에 대해 중간ㅌ 부분의 문자열을 출력
#include<stdio.h>
#include<string.h>

void mid(int a, int b, char *s);

main()
{
    char str[50];
    int num1, num2;

    printf("문자열 입력 : ");
    scanf("%s", str);

    printf("문자열 시작 위치 입력 : ");
    scanf("%d", &num1);

    printf("문자열 길이 입력 : ");
    scanf("%d", &num2);

    mid(num1, num2, str);
}

void mid(int a, int b, char *s)
{
    char temp[80];
    for(int i = 0; i < b; i++){
        temp[i] = s[a+i];
    }
    temp[b] = '\0';
    printf("결과는 %s\n", temp);
}