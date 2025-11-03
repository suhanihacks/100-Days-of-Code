//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element
#include <stdio.h>
#include <limits.h>

long long max(long long a, long long b) {
    return (a > b) ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long max_so_far = arr[0];
    long long current_max = arr[0];

    for (int i = 1; i < n; i++) {
        current_max = max((long long)arr[i], current_max + arr[i]);
        max_so_far = max(max_so_far, current_max);
    }

    printf("%lld\n", max_so_far);
    return 0;
}
