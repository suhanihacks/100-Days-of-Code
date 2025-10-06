//Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[10][10];
    int transpose[10][10];

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

    // Calculate transpose
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < cols; i++) { // Transpose rows become original columns
        for (j = 0; j < rows; j++) { // Transpose columns become original rows
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
