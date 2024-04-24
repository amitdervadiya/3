#include <stdio.h>

struct Book
{
    int book_id;
    char book_title[50];
    char book_author[50];
    int book_price;
};

int main()
{
    int N;

    printf("Enter the number of books: ");
    scanf("%d", &N);

    struct Book books[N];

    for (int i = 0; i < N; i++)
    {
        printf("Enter the details of book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &books[i].book_id);
        printf("Book Title: ");
        scanf("%s", books[i].book_title);
        printf("Book Author: ");
        scanf("%s", books[i].book_author);
      
        printf("Book Price: ");
        scanf("%d", &books[i].book_price);
    }

    for (int i = 0; i < N; i++)
    {
        printf("\nBook %d Details:\n", i + 1);
        printf("Book ID: %d\n", books[i].book_id);
        printf("Book Title: %s\n", books[i].book_title);
        printf("Book Author: %s\n", books[i].book_author);
        printf("Book Price: %d\n", books[i].book_price);
    }

}