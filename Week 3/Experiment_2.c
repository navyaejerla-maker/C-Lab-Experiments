#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time, amount, interest;

    printf("Enter principal: ");
    scanf("%lf", &principal);

    printf("Enter annual rate (%%): ");
    scanf("%lf", &rate);

    printf("Enter time in years: ");
    scanf("%lf", &time);

    amount = principal * pow(1 + rate / 100, time);
    interest = amount - principal;

    printf("Compound Interest = %.2f\n", interest);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}
