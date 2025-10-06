//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int max1, max2;

    printf("Enter the size of the array (at least 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array size must be at least 2.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max1 and max2
    max1 = arr[0];
    max2 = arr[1];

    if (max1 < max2) {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("The second largest element is: %d\n", max2);

    return 0;
}
