//Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit
#include <stdio.h>

int main() {
    float units, bill = 0.0;

    printf("Enter the total units consumed: ");
    scanf("%f", &units);

    if (units <= 100) {
        bill = units * 0.50;
    } else if (units <= 200) {
        bill = (100 * 0.50) + ((units - 100) * 0.75);
    } else if (units <= 300) {
        bill = (100 * 0.50) + (100 * 0.75) + ((units - 200) * 1.50);
    } else {
        bill = (100 * 0.50) + (100 * 0.75) + (100 * 1.50) + ((units - 300) * 2.50);
    }

    printf("Total Electricity Bill: Rs. %.2f\n", bill);

    return 0;
}
