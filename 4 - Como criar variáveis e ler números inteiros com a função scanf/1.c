#include <stdio.h>

int main() {
    int valor, valor2; // criei uma variavel do tipo inteiro

    printf("digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("digite um segundo valor interio: ");
    scanf("%d", &valor2);

    printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2);

    return (0);
}