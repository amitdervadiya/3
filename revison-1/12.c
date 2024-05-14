#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = i; k <= 5; k++)
        {
            printf("%c", k);
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf(" ", j);
        }
        for (int k = i; k <= 5; k++)
        {
            printf("%c", k);
        }
        printf("\n");
    }
    for (int i = 5; i >= 1; i--)
    {
        for (int k = i; k <= 5; k++)
        {
            printf("%c", k);
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf(" ", j);
        }
        for (int k = i; k <= 5; k++)
        {
            printf("%c", k);
        }
        printf("\n");
    }
}