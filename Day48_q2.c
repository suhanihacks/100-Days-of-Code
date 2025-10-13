//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverse_word(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char s[200];
    scanf("%[^\n]s", s);
    int len = strlen(s);
    char *word_start = s;

    for (int i = 0; i <= len; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverse_word(word_start, s + i - 1);
            word_start = s + i + 1;
        }
    }

    printf("%s\n", s);
    return 0;
}
