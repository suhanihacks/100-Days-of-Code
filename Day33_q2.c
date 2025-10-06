//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[101];
    int n, i, element;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the position for insertion
    for (i = n - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i];
    }
    
    arr[i + 1] = element;
    n++; // Increase array size

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
