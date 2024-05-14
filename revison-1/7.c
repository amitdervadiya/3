#include <stdio.h>


void concatStrings(char str1[], char str2[]) {
    int i, j;

    for (i = 0; str1[i] != '\0'; i++);


    for (j = 0; str2[j] != '\0'; j++, i++) {
        str1[i] = str2[j];
    }


    str1[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

 
    concatStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);

}
