//Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.
#include <stdio.h>

int main() {
    int daysLate;
    float fine = 0.0;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &daysLate);

    if (daysLate <= 5) {
        fine = daysLate * 0.50;
    } else if (daysLate <= 10) {
        fine = 5 * 0.50 + (daysLate - 5) * 1.00;
    } else if (daysLate <= 30) {
        fine = 5 * 0.50 + 5 * 1.00 + (daysLate - 10) * 5.00;
    } else if (daysLate > 30) {
        printf("Membership Canceled.\n");
        return 0;
    }

    printf("The fine is: Rs. %.2f\n", fine);

    return 0;
}
