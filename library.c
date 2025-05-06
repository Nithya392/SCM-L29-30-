#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};
int main() {
    struct Book b;

    printf("Enter Book Title :\n ");
    scanf(" %s", b.title);

    printf("Enter Author Name :\n ");
    scanf(" %s", b.author);

    printf("Enter Book Price :\n ");
    scanf("%f", &b.price);

