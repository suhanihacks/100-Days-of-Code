//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            break;
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
            } else {
                printf("Error! Modulo by zero.\n");
                return 1;
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);

    return 0;
}
