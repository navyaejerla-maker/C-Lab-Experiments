#include <stdio.h>

int main(void) {
    int m1, m2, m3, m4, m5, total;
    float average;

    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d",
          &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0f;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}
