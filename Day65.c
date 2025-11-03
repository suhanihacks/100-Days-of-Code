//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[100], t[100];
    int freq[26] = {0};
    bool is_anagram = true;

    scanf("%s", s);
    scanf("%s", t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            is_anagram = false;
            break;
        }
    }

    if (is_anagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    return 0;
}
