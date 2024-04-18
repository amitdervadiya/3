#include <stdio.h>

int main()
{

    int arr[5], even = 0, odd = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter numbers: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("total of even numbers: %d\n", even);
    printf("total of odd numbers: %d\n", odd);
}