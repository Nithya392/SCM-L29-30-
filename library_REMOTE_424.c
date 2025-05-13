#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    float price;
    int year;
};
int main() {
    struct Book b;

    printf("Enter Book Title :\n ");
    scanf(" %s", b.title);

    printf("Enter Author Name :\n ");
    scanf(" %s", b.author);

    printf("Enter Book Price :\n ");
    scanf("%f", &b.price);

    printf("Enter Published year :\n");
    sacnf("%d" , &b.year);

    printf("\nBook Details :\n");
    printf("Title : %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Publised year: %d\n", b.year);
    printf("Price : %.2f\n", b.price);

    return 0;
}

