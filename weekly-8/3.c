#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d",&number);


    while (number != NULL) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    printf("Reversed Number: %d\n", reversedNumber);


}
