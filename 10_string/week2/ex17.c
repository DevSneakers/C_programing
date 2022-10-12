// 좋아하는 과일을 맞추는 퀴즈
// 자신이 좋아하는ㄴ 과일을 퀴즈로 내고 사용자가 맞출 때까지 되풀이하는 프로그램을 작성해보자
#include<stdio.h>
#include<string.h>

int main()
{
    char key[] = "사과";
    char buffer[80];

    do{
        printf("내가 제일 좋아하는 과일은? : ");
        scanf("%s", buffer);
    }while (strcmp(key, buffer) != 0);

    printf("맞았습니다!\n");
    
    return 0;
}