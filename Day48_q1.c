//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s1[100], s2[100];
    char temp[200];
    bool is_rotation = false;

    printf("Enter first string: ");
    scanf("%[^\n]%*c", s1);
    printf("Enter second string: ");
    scanf("%[^\n]%*c", s2);

    if (strlen(s1) != strlen(s2)) {
        is_rotation = false;
    } else {
        strcpy(temp, s1);
        strcat(temp, s1);
        if (strstr(temp, s2) != NULL) {
            is_rotation = true;
        }
    }

    if (is_rotation) {
        printf("String is a rotation\n");
    } else {
        printf("String is not a rotation\n");
    }
    return 0;
}
