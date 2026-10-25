#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, d;
    double realPart, imaginaryPart;

    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation\n");
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        printf("Root 1 = %.2f\n",
               (-b + sqrt(d)) / (2 * a));
        printf("Root 2 = %.2f\n",
               (-b - sqrt(d)) / (2 * a));
    } else if (d == 0) {
        printf("Equal roots = %.2f\n", -b / (2 * a));
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-d) / (2 * a);

        printf("Root 1 = %.2f + %.2fi\n",
               realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n",
               realPart, imaginaryPart);
    }

    return 0;
}
