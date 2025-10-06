//Write a program to check if a number is a strong number.
#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    if (num == 0) return 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, originalN, remainder;
    long long sumFact = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    originalN = n;

    while (n > 0) {
        remainder = n % 10;
        sumFact += factorial(remainder);
        n /= 10;
    }

    if (sumFact == originalN) {
        printf("%d is a STRONG number.\n", originalN);
    } else {
        printf("%d is NOT a strong number.\n", originalN);
    }

    return 0;
}
