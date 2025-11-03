//Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
#include <stdio.h>

int main() {
    int n, target;
    scanf("%d %d", &n, &target);
    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int found_i = -1, found_j = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                found_i = i;
                found_j = j;
                goto end_loops;
            }
        }
    }

end_loops:
    if (found_i != -1) {
        printf("%d %d\n", found_i, found_j);
    } else {
        printf("-1 -1\n");
    }
    return 0;
}
