#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define array_size 100

void brighten_image(char *p, int n);

main()
{
    int HEIGHT = 10, WIDTH = 10;
    int size = HEIGHT * WIDTH;
    char image[array_size] = {0};
    srand(time(NULL));

    for(int i = 0; i < size; i++){
        image[i] = rand() % 10;
    }

    printf("밝기 감소 전\n");
    for(int i = 0; i < size; i++){
        printf("%d ", image[i]);
        if(i % 10 == 9)
            printf("\n");
    }

    brighten_image(image, size);

    printf("\n밝기 감소 후\n");
    for(int i = 0; i < size; i++){
        printf("%d ", image[i]);
        if(i % 10 == 9)
            printf("\n");
    }
}

void brighten_image(char *p, int n)
{
    for(int i = 0; i < n; i++){
        if(p[i] != 0)
            p[i] -= 1;
    }
}