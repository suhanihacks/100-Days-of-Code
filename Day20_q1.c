//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, product = 1, remainder;
    int odd_digit_found = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            odd_digit_found = 1;
        }
        n /= 10;
    }

    if (odd_digit_found) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found. Product is 0 (or 1 if initialized so).\n");
    }

    return 0;
}
