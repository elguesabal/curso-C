#include <stdio.h>

int main() {
    int a, b;

    printf("\nDigite o valor de a: ");
    scanf(" %d", &a);

    printf("Digite o valor de b: ");
    scanf(" %d", &b);

    printf("Valor de a: %d\nValor de b: %d", a, b);

    int c = a;
    a = b;
    b = c;

    printf("\n\nOs valores de 'a' e 'b' foram trocados...");
    printf("\nValor de a: %d\nValor de b: %d\n\n", a, b);

    return (0);
}