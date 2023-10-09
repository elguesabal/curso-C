#include <stdio.h>

int main() {
    int A = 1, *B, **C, ***D;

    B = &A;
    C = &B;
    D = &C;
    printf("Valor de A: %d\nDobro de A (*B): %d\nTriplo de A (**C): %d\nQuadruplo de A (***D): %d", A, *B * 2, **C * 3, ***D * 4);

    return (0);
}