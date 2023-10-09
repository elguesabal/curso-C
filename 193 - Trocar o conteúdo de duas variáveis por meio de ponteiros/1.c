#include <stdio.h>

void troca(float *a, float *b) {
    float c = *a;
    *a = *b;
    *b = c;
}

int main() {
    float a = 10, b = 20;

    troca(&a, &b);

    printf("Valor de a: %.2f\nValor de b: %.2f", a, b);

    return (0);
}