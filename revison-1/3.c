#include <stdio.h>
#include <string.h>


void reverseArray(char arr[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
   
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char array[] = "Hello, World!";
    int length = strlen(array);

    printf("Original string: %s\n", array);

    reverseArray(array, length);

    printf("Reversed string: %s\n", array);

}
