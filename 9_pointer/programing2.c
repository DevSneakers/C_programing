#include<stdio.h>

#define SIZE 5

void print_array_reverse(int *A, int size);

main()
{
    int int_array[SIZE] = {0};

    printf("%d개의 정수 입력 : ", SIZE);
    for(int i = 0; i < SIZE; i++){
        scanf("%d", &int_array[i]);
    }

    print_array_reverse(int_array, SIZE);
}

void print_array_reverse(int *A, int size)
{
    printf("역순 : ");
    for(int i = SIZE-1; i >= 0; i--){
        printf("%d ", A[i]);
    }
}