//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char binary[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's complement: ");
    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        } else {
            printf("Error: Invalid binary digit '%c' at position %d\n", binary[i], i + 1);
            return 1;
        }
    }
    printf("\n");

    return 0;
}
