//#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[200];
    scanf("%[^\n]s", s);
    int n = strlen(s);
    int first_char_found = 0;

    for (int i = 0; i < n; i++) {
        if (!first_char_found && isalpha(s[i])) {
            s[i] = toupper(s[i]);
            first_char_found = 1;
        } else if (first_char_found && isalpha(s[i])) {
            s[i] = tolower(s[i]);
        }
    }

    printf("%s\n", s);
    return 0;
}
