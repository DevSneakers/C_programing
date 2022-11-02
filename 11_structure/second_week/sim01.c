// 문제 1 구조체 함수
// 음식에 대해 음식 이름 칼로리를 구조체 표현
// 칼로리 계산하는 함수 호출
#include<stdio.h>
struct food
{
    char name[100];
    int calories;
};

int calc_total_calroies(struct food array[], int size);

int main()
{
    struct food food_array[3] = {{"hamburger", 900}, {"bulgogi", 500}, {"sushi", 700}};
    int total = calc_total_calroies(food_array, 3);

    printf("%d\n", total);
    return 0;
}

int calc_total_calories(struct food array[], int size)
{
    int i, sum;
    for(i = 0; i < size; i++){
        printf("%10s, %5d\n", array[i].name, array[i].calories);
        sum += array[i].calories;
    }
    return sum;
}