// 문자열 입출력
#include<stdio.h>

main()
{
    char name[100];
    char address[100];

    printf("이름이 어떻게 되시나요? : ");
    gets(name);

    printf("어디 사시나요? : ");
    gets(address);

    printf("안녕하세요 %s에 사는 %s씨.\n", address, name);
}