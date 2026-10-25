#include <stdio.h>
#include <math.h>

int main(void) {
    double number;

    printf("Enter a non-negative number: ");
    scanf("%lf", &number);

    if (number < 0)
        printf("Square root is not real\n");
    else
        printf("Square root = %.2f\n", sqrt(number));

    return 0;
}
