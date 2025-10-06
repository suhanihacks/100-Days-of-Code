//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[10][10];
    int rowSums[10];

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        int currentSum = 0;
        for (j = 0; j < cols; j++) {
            currentSum += matrix[i][j];
        }
        rowSums[i] = currentSum;
    }

    printf("Row sums:\n");
    for (i = 0; i < rows; i++) {
        printf("Sum of Row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
