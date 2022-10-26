// 문제 7 구조체 배열
// 책 표현 구조체 정의, 3개의 내용 저장 구조체 배열 정의, 초기값 부여, 출력
// 구조체는 도서명, 출판사, 가격으로 구성
#include<stdio.h>
#include<string.h>
#define SIZE 3

struct tagBooks{
    char books[50];
    char press[30];
    int price;
};

int main()
{
    struct tagBooks BOOK[SIZE];
    strcpy(BOOK[0].books, "C");
    strcpy(BOOK[0].press, "교보문고");
    BOOK[0].price = 20000;
    BOOK[1] = BOOK[0];
    strcpy(BOOK[2].books, "Python");
    strcpy(BOOK[2].press, "영풍문고");
    BOOK[2].price = 25000;
    for(int i = 0; i < SIZE; i++){
        printf("도서명 : %s\n",BOOK[i].books);
        printf("출판사명 : %s\n", BOOK[i].press);
        printf("도서가격 : %d\n", BOOK[i].price);
        printf("\n\n");
    }
    return 0;
}