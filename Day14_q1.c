//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i, sum = 0, count = 0;

    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);

    printf("The first %d odd numbers are: ", n);
    for (i = 1; count < n; i += 2) {
        printf("%d ", i);
        sum += i;
        count++;
    }

    printf("\nSum of the first %d odd numbers: %d\n", n, sum);

    return 0;
}
