// 문제 9 구조체 배열
// 음식에 대해 이름 칼로리를 구조체로 표현
// 식사 코스에서 등작하는 음식을 구조체 배열로 표현, 코스의 전체 칼로리 계산
#include<stdio.h>
#include<string.h>
#define SIZE 3

struct food{
    char name[100];
    int calories;
};

int main()
{
    struct food f_array[SIZE] ={
        {"hamburger", 900},
        {"bulgogi", 500},
        {"sushi", 700}
    };

    int total_calories = 0;

    for(int i = 0; i < SIZE; i++){
        printf("%10s, %5d\n", f_array[i].name, f_array[i].calories);
        total_calories += f_array[i].calories;
    }

    printf("%10s : %d\n","총 합", total_calories);

    return 0;
}