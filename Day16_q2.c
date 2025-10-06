//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, originalN, reversedN = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;

    while (n > 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    if (originalN == reversedN) {
        printf("%d is a PALINDROME number.\n", originalN);
    } else {
        printf("%d is NOT a palindrome number.\n", originalN);
    }

    return 0;
}
