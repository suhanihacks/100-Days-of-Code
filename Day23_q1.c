//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Series terms: ");
    for (i = 1; i <= n; i++) {
        // Numerator is i
        // Denominator is 2*i + 1
        sum += (double)i / (2 * i + 1);
        printf("%d/%d ", i, 2 * i + 1);
    }
    printf("\n");

    printf("Sum of the series is: %.4lf\n", sum);

    return 0;
}
