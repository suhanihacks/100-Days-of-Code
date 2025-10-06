//Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
  #include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = n; j >= n - i + 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
