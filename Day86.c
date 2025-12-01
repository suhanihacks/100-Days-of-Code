//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

int main() {
    enum Operation {
        ADD = 1,
        SUBTRACT,
        MULTIPLY
    };

    int choice;
    double a, b, result;

    scanf("%d %lf %lf", &choice, &a, &b);

    switch (choice) {
        case ADD:
            result = a + b;
            printf("%.2f\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("%.2f\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("%.2f\n", result);
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}
