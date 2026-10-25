#include <stdio.h>

int main(void) {
    float units, rate, bill;

    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units < 0) {
        printf("Invalid units\n");
        return 0;
    }

    if (units <= 100)
        rate = 1.50f;
    else if (units <= 200)
        rate = 2.50f;
    else if (units <= 500)
        rate = 4.00f;
    else
        rate = 6.00f;

    bill = units * rate;

    printf("Rate per unit = Rs. %.2f\n", rate);
    printf("Total electricity bill = Rs. %.2f\n", bill);

    return 0;
}
