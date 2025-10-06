//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, originalN, remainder, nDigits = 0;
    double sum = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;

    int temp = originalN;
    while (temp != 0) {
        temp /= 10;
        ++nDigits;
    }

    temp = originalN;
    while (temp > 0) {
        remainder = temp % 10;
        sum += pow(remainder, nDigits);
        temp /= 10;
    }

    if ((int)sum == originalN) {
        printf("%d is an ARMSTRONG number.\n", originalN);
    } else {
        printf("%d is NOT an Armstrong number.\n", originalN);
    }

    return 0;
}
