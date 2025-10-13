//Print the initials of a name.
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    scanf("%[^\n]s", name);

    printf("%c. ", name[0]);
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != '\0') {
            printf("%c. ", name[i+1]);
        }
    }
    printf("\n");

    return 0;
}
