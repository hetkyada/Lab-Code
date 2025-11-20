//Create a Book structure containing book_id, title, author name and price. Write a C program to pass a structure as a function argument and print the book details.

#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void printBook(struct Book b) {
    printf("\nBook Details:\n");
    printf("Book ID : %d\n", b.book_id);
    printf("Title   : %s\n", b.title);
    printf("Author  : %s\n", b.author);
    printf("Price   : %.2f\n", b.price);
}

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.book_id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    printBook(b);

    return 0;
}
