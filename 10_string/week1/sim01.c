// 문제 1 (문자 입출력) 문자를 하나 입력받아 입력받은 문자의 아스키코드값을 출력하는 프로그램 작성
#include<stdio.h>

main()
{
    char ch;
    printf("문자를 하나 입력하세요 -> ");
    ch = getchar();
    printf("\n%c의 아스키 코드 값은 십진수 %d 입니다.\n", ch, ch);
}