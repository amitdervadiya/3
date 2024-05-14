#include <stdio.h>
#include <string.h>


int countVowels(char str[]) {
    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
     
        char ch = tolower(str[i]);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    int vowels = countVowels(str);
    printf("Number of vowels in the string: %d\n", vowels);

    return 0;
}
