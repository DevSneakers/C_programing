// 문제 14 (문자 함수)
// 문자열 입력받아 소문자는 대문자 대문자는 소문자로 변환
#include<stdio.h>
#include<ctype.h>

int main()
{
    int i = 0, num = 0;
    char str[50];

    printf("문자열 입력 : ");
    gets(str);
    
    while(str[i]){
        if(isupper(str[i]))
            str[i] = tolower(str[i]);
        else if(islower(str[i]))
            str[i] = toupper(str[i]);
        i++;
    }
    puts(str);

    return 0;
}