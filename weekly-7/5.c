#include <stdio.h>

void main() {
    int marks;

    printf("Enter student's marks: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }
}