//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isupper(ch)) {
        printf("'%c' is an UPPERCASE alphabet.\n", ch);
    } else if (islower(ch)) {
        printf("'%c' is a LOWERCASE alphabet.\n", ch);
    } else if (isdigit(ch)) {
        printf("'%c' is a DIGIT.\n", ch);
    } else {
        printf("'%c' is a SPECIAL character.\n", ch);
    }

    return 0;
}
