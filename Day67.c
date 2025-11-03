//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m], b[n];
    int merged[m + n];
    int i = 0, j = 0, k = 0;

    for (int x = 0; x < m; x++) scanf("%d", &a[x]);
    for (int x = 0; x < n; x++) scanf("%d", &b[x]);

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < m) {
        merged[k++] = a[i++];
    }

    while (j < n) {
        merged[k++] = b[j++];
    }

    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");
    return 0;
}
