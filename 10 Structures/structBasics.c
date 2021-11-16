/*
structure is another user defined data type available in C 
that allows to combine data items of different kinds.
Structures are used to represent a record.
*/
#include <stdio.h>
#include <string.h>

// Defining the structure 
struct Book
{
    int id;
    char title[50];
    char author[50];
    char genre[20];
};

void main()
{
    // <'struct' keyword> <structure name> <variable name>
    struct Book b1;

    b1.id = 01;
    strcpy(b1.title, "C-Programming");
    strcpy(b1.author, "E. Balguruswamy");
    strcpy(b1.genre, "Education");

    printf("Book: %s\n", b1.title);
    printf("Book ID: %d\n", b1.id);
    printf("Author: %s\n", b1.author);
    printf("Genre: %s\n", b1.genre);
}