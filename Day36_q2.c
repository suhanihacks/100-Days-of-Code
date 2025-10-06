//Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[10][10];
    long long sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements in the matrix: %lld\n", sum);

    return 0;
}
