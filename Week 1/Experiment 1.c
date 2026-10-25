#include <stdio.h>

int main(void) {
    int age;
    float marks;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\nStudent Details\n");
    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);

    return 0;
}
