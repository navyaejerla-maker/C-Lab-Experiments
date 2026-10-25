#include <stdio.h>

int main(void) {
    int A, B, C, D, E, F, G;
    int i, J;
    double result1, result2;

    printf("Enter A B C D E F G: ");
    scanf("%d %d %d %d %d %d %d",
          &A, &B, &C, &D, &E, &F, &G);

    if (B == 0) {
        printf("Expression (b) cannot be evaluated: B is zero\n");
    } else {
        result1 = A + B * C + D * E + F * G;
        printf("(a) = %.2f\n", result1);

        printf("(b) = %.2f\n",
               (double)A / B * C - B + (double)A * D / 3);
    }

    printf("(c) A+++B---A: undefined behavior in C\n");
    printf("(d) J=(i++)+(++i): undefined behavior in C\n");

    return 0;
}
