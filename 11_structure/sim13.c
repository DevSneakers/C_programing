// 문제 13 구조체의 구조체
// 책을 표현하는 구조체 정의, 초기값 부여, 출력
// 구조체는 발간년월일 구조체를 멤버로 가진다
// 구조체의 멤버는 도서명 출판사 가격으로 구성
#include<stdio.h>
#include<string.h>
struct date
{
    int month;
    int day;
    int year;
};

struct tagBooks
{
    char books[50];
    char press[30];
    int price;
    struct date pub_date;
};

int main()
{
    struct date d = {10, 26, 2020};
    struct tagBooks BOOK;
    strcpy(BOOK.books, "Python");
    strcpy(BOOK.press, "교보문고");
    BOOK.price = 25000;
    BOOK.pub_date = d;

    printf("도서명 : %s\n", BOOK.books);
    printf("출판사명 : %s\n", BOOK.press);
    printf("도서가격 : %d\n", BOOK.price);
    printf("%d년 %d월 %d일 발간\n", BOOK.pub_date.year, BOOK.pub_date.month, BOOK.pub_date.day);

    return 0;
}