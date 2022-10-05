// ctype.h 헤더 is~~ 함수, to ~~ 함수
#include<stdio.h>
#include<ctype.h>

main()
{
    int c;

    while((c = getchar()) != EOF)
    {
        if(islower(c))
            c = toupper(c);
        putchar(c);
    }
}