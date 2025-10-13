//Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char s[100];
    int count = 0;
    scanf("%[^\n]s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        count++;
    }

    printf("%d\n", count);
    return 0;
}
