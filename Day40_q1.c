//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[10][10];
    int k;

    printf("Enter number of rows and columns (for square matrix): ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Diagonal traversal usually applies to square matrices.\n");
        return 1;
    }

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal (Main Diagonal):\n");
    for (i = 0; i < rows; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
    
    printf("Diagonal Traversal (Anti-Diagonal):\n");
    for (i = 0; i < rows; i++) {
        printf("%d ", matrix[i][rows - 1 - i]);
    }
    printf("\n");

    return 0;
}
