//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (k > n) {
        return 0;
    }

    for (int i = 0; i <= n - k; i++) {
        int max_element = INT_MIN;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] > max_element) {
                max_element = arr[i + j];
            }
        }
        printf("%d ", max_element);
    }
    printf("\n");
    return 0;
}
