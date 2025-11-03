//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>

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
        int first_negative = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]);
                first_negative = 1;
                break;
            }
        }
        if (!first_negative) {
            printf("0 ");
        }
    }
    printf("\n");
    return 0;
}
