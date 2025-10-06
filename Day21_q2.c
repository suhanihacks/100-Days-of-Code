//Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int n, i, sumOfDivisors = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sumOfDivisors += i;
        }
    }

    if (sumOfDivisors == n) {
        printf("%d is a PERFECT number.\n", n);
    } else {
        printf("%d is NOT a perfect number.\n", n);
    }

    return 0;
}
