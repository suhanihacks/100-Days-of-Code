//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[100];
    bool is_palindrome = true;
    scanf("%[^\n]s", s);
    int len = strlen(s);

    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
    return 0;
}
