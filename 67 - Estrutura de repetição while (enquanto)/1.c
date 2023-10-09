#include <stdio.h>

int main() {
    int valor = 0;

    while(valor <= 0) {
        printf("Digite um valor maior que zero: ");
        scanf(" %d", &valor);
    }

    printf("Valor lido: %d\n\n", valor);

    return (0);
}