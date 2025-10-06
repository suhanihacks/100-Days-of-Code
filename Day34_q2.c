//Delete an element from an array.
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, element, position = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &element);

    // Find the position of the element
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            position = i;
            break;
        }
    }

    if (position == -1) {
        printf("Element %d not found.\n", element);
        return 0;
    }

    // Shift elements to the left
    for (i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease array size

    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
