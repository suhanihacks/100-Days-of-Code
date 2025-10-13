//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", s[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
