//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, posCount = 0, negCount = 0, zeroCount = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            posCount++;
        } else if (arr[i] < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Positive elements count: %d\n", posCount);
    printf("Negative elements count: %d\n", negCount);
    printf("Zero elements count: %d\n", zeroCount);

    return 0;
}
