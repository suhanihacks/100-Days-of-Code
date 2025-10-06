//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i, j;
    long long factorial = 1;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Calculate i!
        factorial = 1;
        for(j = 1; j <= i; j++) {
            factorial *= j;
        }
        if (i == 1) {
            sum += 1.0;
        } else {
            sum += (double)factorial / i;
        }
    }

    printf("Sum of the series is: %.4lf\n", sum);

    return 0;
}
