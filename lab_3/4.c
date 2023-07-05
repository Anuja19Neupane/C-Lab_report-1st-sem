// WAP to input a character from the user and check whether the character is alphabet or not. If the character
// is alphabet then show whether it is uppercase or lowercase.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character is an alphabet.\n");

        if (ch >= 'a' && ch <= 'z') {
            printf("It is a lowercase alphabet.\n");
        } else {
            printf("It is an uppercase alphabet.\n");
        }
    } else {
        printf("The character is not an alphabet.\n");
    }

    return 0;
}
