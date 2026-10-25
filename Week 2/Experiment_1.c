#include <stdio.h>

int main(void) {
    float a, b, c, sum, average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
