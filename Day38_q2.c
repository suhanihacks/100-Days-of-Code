//Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1;
    int matrix[10][10];

    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric) {
        printf("The matrix is SYMMETRIC.\n");
    } else {
        printf("The matrix is NOT symmetric.\n");
    }

    return 0;
}
