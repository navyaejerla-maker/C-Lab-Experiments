#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, s, area;

    printf("Enter three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid triangle\n");
        return 0;
    }

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of triangle = %.2f\n", area);

    return 0;
}
