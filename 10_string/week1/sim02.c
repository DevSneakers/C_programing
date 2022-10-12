// 문제 2 (문자열 처리) 임의의 문자열에 대해 특정 문자의 위치를 반환하는 함수 작성하고, 이 함수를 이용해 특정문자의 위치를 출력
#include<stdio.h>
#include<string.h>

void location(char *s, char d);

main()
{
    char str[100];
    char letter;

    printf("문자열 입력 : ");
    gets(str);

    printf("특정 문자 입력 : ");
    scanf("%c", &letter);

    location(str, letter);
}

void location(char *s, char d)
{
    int i;
    int num = 0;

    for(i = 0; s[i] != NULL; i++){ // 문자열 끝은 NULL이기 때문에 for문을 돌릴 근거가 됨
        if(s[i] == d)
            num = i + 1;
    }
    printf("문자열 %s에서 특정문자 %c의 위치는 %d\n", s, d, num);
}