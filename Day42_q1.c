//Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int vowels = 0, consonants = 0;
    scanf("%[^\n]s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
