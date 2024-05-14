#include <stdio.h>

int main() {
    int num;
 int fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}
