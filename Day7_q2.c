//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("'%c' is a VOWEL.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a CONSONANT.\n", ch);
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}
