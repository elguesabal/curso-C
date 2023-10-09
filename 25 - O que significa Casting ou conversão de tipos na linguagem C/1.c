#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("\nSoma: %d\n", a + b);
    printf("\nSubtracao: %d\n", a - b);
    printf("\nMultiplicacao: %d\n", a * b);
    printf("\nDivisao: %.1f\n\n", (float)a / b);

    float pi = 3.1415;
    int c = (int)pi;
    printf("Valor de c: %d\n\n", c);

    return (0);
}