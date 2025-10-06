//Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, evenCount = 0, oddCount = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even numbers count: %d\n", evenCount);
    printf("Odd numbers count: %d\n", oddCount);

    return 0;
}
