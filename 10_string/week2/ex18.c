// 행맨
// 빈칸으로 구성된 문자열이 주어지고 사용자는 문자열에 들어갈 글자들을 하나씩 추측해서 맞추는 게임
#include<stdio.h>
#include<string.h>

int main()
{
    char sol[100] = "meet at midnight";
    char ans[100] = "____ __ ________";
    char ch;
    int i;

    while(1){
        printf("\n문자열 입력 : %s\n", ans);
        printf("글자를 추측하시오 : ");
        scanf("%c", &ch);

        for(i = 0; sol[i] != NULL; i++){
            if(sol[i] == ch)
                ans[i] = ch;
        }
        if(strcmp(sol, ans) == 0)
            break;
    }
    return 0;
}