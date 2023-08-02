#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// book info for add a book in library//

struct Book
{
    char name[100];
    char author[100];
    char department[100];
    int is_available;
};

// Declaration all functions in here//

void addBook(struct Book library[], int *num_books);

// Main Function for call other functions//

int main()
{
    struct Book library[MAX_BOOKS];
    int num_books = 0;

    addBook(library, &num_books);
}

// Add books in library//

void addBook(struct Book library[], int *num_books)
{
    if (*num_books >= MAX_BOOKS)
    {
        printf("Library is full. Cannot add more books.\n");
        return;
    }
    else
    {
        printf("Enter Book Name: ");
        scanf("%s", library[*num_books].name);
        printf("Enter Book Author: ");
        scanf("%s", library[*num_books].author);
        printf("Enter Department For Book: ");
        scanf("%s", library[*num_books].department);

        library[*num_books].is_available = 1;
        (*num_books)++;

        printf("Book Added Successfully!!\n");
    }
}
