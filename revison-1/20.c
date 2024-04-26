#include <stdio.h>

int main() {
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf(" table of %d:\n", num);
    
 
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }

}
