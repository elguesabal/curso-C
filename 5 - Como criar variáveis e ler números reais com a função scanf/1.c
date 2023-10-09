#include <stdio.h>

int main() {
    float numero = 3.1415;

    printf("Valor da minha variavel: %.2f\n", numero);

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    printf("Valor digitado: %.2f", numero);
}