#include <stdio.h>
#include <string.h>

// Create a structure named Book to store book details such as titile author , and price  ,
//  write a c program to input details for 3 books . ,
//  Display the information about the most expensive book

#include <stdio.h>
#include <string.h>

typedef struct {
    char title[100];
    char author[100];
    double price;
} Book;

void scan_book(Book *b) {
    printf("Enter book title: ");
    scanf(" %[^\n]", b->title);

    printf("Enter author name: ");
    scanf(" %[^\n]", b->author);

    printf("Enter price: ");
    scanf("%lf", &b->price);
}

void print_book(Book *b) {
    printf("\nBook Details:\n");
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Price: %.2lf\n", b->price);
}

int find_most_expensive(Book books[], int size) {
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (books[i].price > books[max_index].price) {
            max_index = i;
        }
    }
    return max_index;
}

int main() {
    Book books[3];

    // Input details for 3 books
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        scan_book(&books[i]);
    }

    // Find the most expensive book
    int index = find_most_expensive(books, 3);

    // Display the most expensive book
    printf("\nThe most expensive book is:\n");
    print_book(&books[index]);

    return 0 ;
}