//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, firstDigit, lastDigit, digits, swappedN;

    printf("Enter an integer: ");
    scanf("%d", &n);

    lastDigit = n % 10;
    
    digits = (int)log10(n);
    firstDigit = n / (int)pow(10, digits);

    temp = n / 10;
    temp = temp % (int)pow(10, digits - 1);
    
    swappedN = lastDigit * (int)pow(10, digits) + temp * 10 + firstDigit;

    printf("Original number: %d\n", n);
    printf("Number after swapping first and last digits: %d\n", swappedN);

    return 0;
}
