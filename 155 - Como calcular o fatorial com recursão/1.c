#include <stdio.h>

int fatorial(int n) {
    return n > 1 ? (n * fatorial(n - 1)) : (1);
}

int main() {
    int n;

    printf("Digite um valor maior que zero: ");
    scanf(" %d", &n);

    printf("Resultado: %d", fatorial(n));

    return  (0);
}