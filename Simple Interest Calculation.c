// Write a program to calculate simple interest amount(SI) for deposit amount (P) kept in bank for (t) years at the rate of (r) simple interest per annum.

#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", simpleInterest);
    return 0;
}
