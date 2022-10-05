#include<stdio.h>

int get_array_sum(int *A, int size);

main()
{
    int size = 10, result = 0;
    int data[10] = {0};

    printf("배열에 넣을 값 입력 : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &data[i]);
    }

    result = get_array_sum(data, size);

    printf("배열 요소의 합 = %d\n", result);
}

int get_array_sum(int *A, int size)
{
    int result = 0;
    for(int i = 0; i < size; i++){
        result += A[i];
    }
    return result;
}