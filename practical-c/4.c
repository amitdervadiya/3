#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
   
    int *ptr = arr;

    for (int i = 0; i < 5; i++) {
        *ptr = (*ptr) * (*ptr) * (*ptr);
        ptr++;
    }

    for (int i = 0; i < 5; i++) {
        printf("Array element  cubed is %d\n", arr[i]);
    }

}