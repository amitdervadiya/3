#include <stdio.h>

struct Book
{
    int book_id;
    char book_title[50];
    char book_author[50];
    int book_genre;
    char book_publisher[50];
    int book_publication_year;
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
        printf("Book Genre (1: Fiction, 2: Non-Fiction): ");
        scanf("%d", &books[i].book_genre);
        printf("Book Publisher: ");
        scanf("%s", books[i].book_publisher);
        printf("Book Publication Year: ");
        scanf("%d", &books[i].book_publication_year);
        printf("Book Price: ");
        scanf("%d", &books[i].book_price);
    }

    for (int i = 0; i < N; i++)
    {
        printf("\nBook %d Details:\n", i + 1);
        printf("Book ID: %d\n", books[i].book_id);
        printf("Book Title: %s\n", books[i].book_title);
        printf("Book Author: %s\n", books[i].book_author);
        printf("Book Genre: %s\n", (books[i].book_genre == 1) ? "Fiction" : "Non-Fiction");
        printf("Book Publisher: %s\n", books[i].book_publisher);
        printf("Book Publication Year: %d\n", books[i].book_publication_year);
        printf("Book Price: %d\n", books[i].book_price);
    }

    return 0;
}