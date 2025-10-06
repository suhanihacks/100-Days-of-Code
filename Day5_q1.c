//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (p.a.): ");
    scanf("%f", &rate);
    printf("Enter Time in years: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100.0;

    compoundInterest = principal * (pow((1 + rate / 100.0), time));
    compoundInterest = compoundInterest - principal;

    printf("\nSimple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
