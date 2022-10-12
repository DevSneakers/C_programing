// 문제 6 (문자열 처리)
// 문자열에 대해 특정 위치로부터 오른쪽 문자열 반환 함수 작성, 오른쪽 부분 문자열 출력하는 프로그램
#include<stdio.h>
#include<string.h>

void right(int num, char *s);

main()
{
    char str[50];
    int num = 0;

    printf("문자열 입력 : ");
    gets(str);

    printf("오른쪽 반환하고 싶은 위치 입력 : ");
    scanf("%d", &num);

    right(num, str);
}

void right(int num, char *s)
{
    int i, length = 0;
    char temp[50];
    while(s[length] != '\0')
        length++;
    for(i = 0; i < num; i++)
        temp[i] = s[length - num + i];
    temp[num] = '\0';

    printf("반환할 오른쪽 문자열 -> %s\n", temp);
}