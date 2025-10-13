//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s1[100], s2[100];
    int count1[26] = {0}, count2[26] = {0};
    bool is_anagram = true;

    printf("Enter first string: ");
    scanf("%[^\n]%*c", s1);
    printf("Enter second string: ");
    scanf("%[^\n]%*c", s2);

    if (strlen(s1) != strlen(s2)) {
        is_anagram = false;
    } else {
        for (int i = 0; s1[i] != '\0'; i++) {
            if (s1[i] >= 'a' && s1[i] <= 'z') count1[s1[i] - 'a']++;
            if (s2[i] >= 'a' && s2[i] <= 'z') count2[s2[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (count1[i] != count2[i]) {
                is_anagram = false;
                break;
            }
        }
    }

    if (is_anagram) {
        printf("Anagrams\n");
    } else {
        printf("Not Anagrams\n");
    }
    return 0;
}
