#include <stdio.h>

int main(void) {
    double a, b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %.2f\n", a + b);
            break;

        case 2:
            printf("Result = %.2f\n", a - b);
            break;

        case 3:
            printf("Result = %.2f\n", a * b);
            break;

        case 4:
            if (b == 0)
                printf("Division by zero is not possible\n");
            else
                printf("Result = %.2f\n", a / b);
            break;

        default:
            printf("Invalid option\n");
    }

    return 0;
}
