// 문제 2 구조체 기초
// 구조체 이용, 책을 표현할 수 있는 구조체 정의, 초기값 부여, 출력
#include<stdio.h>
#include<string.h>

struct tagBooks{
    char books[50];
    char press[30];
    int price;
};

int main()
{
    struct tagBooks BOOK;
    strcpy(BOOK.books, "만들어진 신");
    strcpy(BOOK.press, "교보문고");
    BOOK.price = 34200;

    printf("도서명 : %s\n", BOOK.books);
    printf("출판사 : %s\n", BOOK.press);
    printf("가격 : %d\n", BOOK.price);

    return 0;
}