#include <stdio.h>

int main()
{
    int arr[5] = {1, 5, 8, 3, 9};

    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("The minimum element in the array is %d\n", min);
}