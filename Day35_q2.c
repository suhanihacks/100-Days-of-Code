//Rotate an array to the right by k positions.
#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int i, j, last;
    
    // Normalize k
    k = k % n; 

    for (i = 0; i < k; i++) {
        last = arr[n - 1];
        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

int main() {
    int arr[100];
    int n, i, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right (k): ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after right rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
