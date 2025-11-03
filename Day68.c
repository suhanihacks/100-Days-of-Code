//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    long long expected_sum;
    long long actual_sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actual_sum += arr[i];
    }

    int N_range = n;
    expected_sum = (long long)N_range * (N_range + 1) / 2;
    
    int missing_number = (int)(expected_sum - actual_sum);

    printf("%d\n", missing_number);
    return 0;
}
