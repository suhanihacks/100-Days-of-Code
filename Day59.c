//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    long long max_sum = LONG_MIN;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (k > n) {
        return 0;
    }

    for (int i = 0; i <= n - k; i++) {
        long long current_sum = 0;
        for (int j = 0; j < k; j++) {
            current_sum += arr[i + j];
        }
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%lld\n", max_sum);
    return 0;
}
