#include <stdio.h>

void Triangle(int rows) {
    // Iterate through each row
    for (int i = 1; i <= rows; i++) {
   
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows for the right-angled triangle: ");
    scanf("%d", &rows);

   Triangle(rows);

    return 0;
}
