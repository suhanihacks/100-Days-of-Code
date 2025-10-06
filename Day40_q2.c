//Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    int A[10][10], B[10][10], C[10][10] = {0};

    printf("Enter rows and columns for first matrix (r1 c1): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix (r2 c2): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < r1; i++) for (j = 0; j < c1; j++) scanf("%d", &A[i][j]);
    
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < r2; i++) for (j = 0; j < c2; j++) scanf("%d", &B[i][j]);

    // Multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix (A * B):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
