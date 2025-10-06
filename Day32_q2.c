//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int n, temp;
    int digitCounts[10] = {0}; // Array to store counts of digits 0-9
    int maxCount = 0, mostFrequentDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;
    if (temp == 0) {
        digitCounts[0]++;
    }

    while (temp != 0) {
        digitCounts[temp % 10]++;
        temp /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (digitCounts[i] > maxCount) {
            maxCount = digitCounts[i];
            mostFrequentDigit = i;
        }
    }

    printf("The most frequently occurring digit is %d (occurs %d times).\n", mostFrequentDigit, maxCount);

    return 0;
}
