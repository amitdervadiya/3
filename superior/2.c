#include <stdio.h>

int main()
{
    int arr[5] = {1, 5, 8, 3, 9};

    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The maximum element in the array is %d\n", max);
}