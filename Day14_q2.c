//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter the limit (n): ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: ", n);
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
        product *= i;
    }

    printf("\nProduct of even numbers: %lld\n", product);

    return 0;
}
