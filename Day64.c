//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool has_repeating(char s[], int start, int end) {
    bool visited[256] = {false};
    for (int i = start; i <= end; i++) {
        if (visited[(int)s[i]]) {
            return true;
        }
        visited[(int)s[i]] = true;
    }
    return false;
}

int main() {
    char s[200];
    scanf("%s", s);
    int n = strlen(s);
    int max_len = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (!has_repeating(s, i, j)) {
                if (j - i + 1 > max_len) {
                    max_len = j - i + 1;
                }
            } else {
                break;
            }
        }
    }

    printf("%d\n", max_len);
    return 0;
}
