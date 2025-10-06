//Merge two arrays.
#include <stdio.h>

int main() {
    int arr1[50], arr2[50], mergedArr[100];
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        mergedArr[i] = arr1[i];
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (j = 0; j < n2; j++) {
        scanf("%d", &arr2[j]);
        mergedArr[n1 + j] = arr2[j];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
