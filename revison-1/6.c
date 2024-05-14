#include <stdio.h>
#include <string.h>


int isPalindrome(char str[]) {
    char reversed[100]; 

   
    strcpy(reversed, str);
    strrev(reversed);

    if (strcmp(str, reversed) == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
