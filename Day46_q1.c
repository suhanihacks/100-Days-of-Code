//Remove all vowels from a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char s[100];
    scanf("%[^\n]s", s);
    int k = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (!is_vowel(s[i])) {
            s[k] = s[i];
            k++;
        }
    }
    s[k] = '\0';

    printf("%s\n", s);
    return 0;
}
