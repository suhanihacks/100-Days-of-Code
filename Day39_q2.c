//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int diagonalSum = 0;

    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                diagonalSum += matrix[i][j];
            }
        }
    }

    printf("Sum of the main diagonal elements: %d\n", diagonalSum);

    return 0;
}
