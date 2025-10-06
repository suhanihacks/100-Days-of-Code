//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float cp, sp, amount, percentage;

    printf("Enter Cost Price (CP): ");
    scanf("%f", &cp);
    printf("Enter Selling Price (SP): ");
    scanf("%f", &sp);

    amount = sp - cp;

    if (amount > 0) {
        percentage = (amount / cp) * 100;
        printf("PROFIT of %.2f\n", amount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (amount < 0) {
        percentage = (-amount / cp) * 100;
        printf("LOSS of %.2f\n", -amount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("NEITHER PROFIT NOR LOSS (Break Even).\n");
    }

    return 0;
}
