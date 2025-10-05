//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("\nResults:\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Quotient: Division by zero is not possible.\n");
    }

    return 0;
}
