//Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, element, low, high, mid, found = 0;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            printf("Element %d found at index %d.\n", element, mid);
            found = 1;
            break;
        } else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}
