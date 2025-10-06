//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int decimal, binary = 0, base = 1;
    int tempDecimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    tempDecimal = decimal;

    while (tempDecimal > 0) {
        binary = binary + (tempDecimal % 2) * base;
        tempDecimal /= 2;
        base *= 10;
    }

    printf("Binary equivalent of %d is: %d\n", decimal, binary);

    return 0;
}
