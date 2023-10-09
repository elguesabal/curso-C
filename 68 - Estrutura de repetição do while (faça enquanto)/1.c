#include <stdio.h>

int main() {
    int valor;

    do {
        printf("Digite um valor maior que zero: ");
        scanf(" %d", &valor);
    } while(valor <= 0);

    printf("Valor lido: %d", valor);

    return (0);
}