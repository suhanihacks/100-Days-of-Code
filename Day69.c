//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
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

    int N_range_max = n - 1; 
    expected_sum = (long long)N_range_max * (N_range_max + 1) / 2;
    
    int repeated_element = (int)(actual_sum - expected_sum);

    printf("%d\n", repeated_element);
    return 0;
}
