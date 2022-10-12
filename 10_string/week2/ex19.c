// 영단어를 이루는 글자가 섞인것을 받아 순서래도 재배치하는 게임
// 애나그램
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SOL "apple"

int main()
{
    char s[100] = SOL;
    char ans[100];
    int i, len;

    len = strlen(s);
    
    for(i = 0; i < len; i++){
        int pos1 = rand()%len;
        int pos2 = rand()%len;
        char tmp = s[pos1];
        s[pos1] = s[pos2];
        s[pos2] = tmp;
    }

    do{
        printf("%s의 원래 단어를 맞춰보세요 : ", s);
        scanf("%s", ans);
    }while(strcmp(ans, SOL) != 0);

    printf("맞췄습니다\n");
    return 0;
}