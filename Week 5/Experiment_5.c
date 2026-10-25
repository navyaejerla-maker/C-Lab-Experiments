#include <stdio.h>

int main(void) {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year <= 0) {
        printf("Invalid year\n");
    } else if (year % 400 == 0 ||
              (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}
