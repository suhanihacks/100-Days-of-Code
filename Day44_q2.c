//Replace spaces with hyphens in a string.
#include <stdio.h>

int main() {
    char s[100];
    scanf("%[^\n]s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            s[i] = '-';
        }
    }

    printf("%s\n", s);
    return 0;
}
