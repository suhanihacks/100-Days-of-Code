//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char s[100];
    int freq[26] = {0};
    char repeating_char = '\0';
    scanf("%[^\n]s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int index = s[i] - 'a';
            freq[index]++;
            if (freq[index] == 2) {
                repeating_char = s[i];
                break;
            }
        }
    }

    if (repeating_char != '\0') {
        printf("%c\n", repeating_char);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}
