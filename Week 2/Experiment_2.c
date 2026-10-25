#include <stdio.h>

int main(void) {
    int choice;
    float temperature, result;

    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    switch (choice) {
        case 1:
            result = (temperature - 32) * 5.0 / 9.0;
            printf("Celsius = %.2f\n", result);
            break;

        case 2:
            result = temperature * 9.0 / 5.0 + 32;
            printf("Fahrenheit = %.2f\n", result);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
