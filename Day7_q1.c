//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main() {
    int year, is_leap;

    printf("Enter a year: ");
    scanf("%d", &year);

    is_leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    printf("%d is a leap year: %s\n", year, is_leap ? "True" : "False");

    return 0;
}
