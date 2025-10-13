//Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int spaces = 0, digits = 0, special = 0;
    scanf("%[^\n]s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            spaces++;
        } else if (isdigit(s[i])) {
            digits++;
        } else if (!isalpha(s[i])) {
            special++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);
    return 0;
}
