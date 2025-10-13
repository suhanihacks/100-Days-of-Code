//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest_word[100] = "";
    int max_len = 0;
    char *current_word;
    
    scanf("%[^\n]s", sentence);

    current_word = strtok(sentence, " ");
    while (current_word != NULL) {
        if (strlen(current_word) > max_len) {
            max_len = strlen(current_word);
            strcpy(longest_word, current_word);
        }
        current_word = strtok(NULL, " ");
    }

    printf("%s\n", longest_word);
    return 0;
}
