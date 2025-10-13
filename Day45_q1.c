//Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char s[100], ch;
    int count = 0;
    
    printf("Enter string: ");
    scanf("%[^\n]%*c", s);
    printf("Enter character to find: ");
    scanf("%c", &ch);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c': %d\n", ch, count);
    return 0;
}
