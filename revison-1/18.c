#include <stdio.h>

int main() {
    int num, i = 2;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("The number is not prime.\n");
        return 0;
    }

    do {
        if (num % i == 0) {
            printf("The number is not prime.\n");
            return 0;
        }
        i++;
    } while (i <= num / 2);

    printf("The number is prime.\n");
    return 0;
}
