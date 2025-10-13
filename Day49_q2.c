//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *surname = NULL;
    int len;
    scanf("%[^\n]s", name);
    len = strlen(name);

    for (int i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            surname = &name[i+1];
            name[i] = '\0';
            break;
        }
    }

    if (surname != NULL) {
        // Print initials of first/middle names
        printf("%c. ", name[0]);
        for (int i = 0; name[i] != '\0'; i++) {
            if (name[i] == ' ' && name[i+1] != '\0') {
                printf("%c. ", name[i+1]);
            }
        }
        // Print surname
        printf("%s\n", surname);
    } else {
        printf("%s\n", name); // If there's only one word
    }

    return 0;
}
