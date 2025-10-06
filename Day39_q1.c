//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, i, j, isDistinct = 1;
    int matrix[10][10];

    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check distinctness of main diagonal elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }

    if (isDistinct) {
        printf("Diagonal elements are DISTINCT.\n");
    } else {
        printf("Diagonal elements are NOT distinct.\n");
    }

    return 0;
}
