#include <stdio.h>

int main() {
    int opcao;
    float valor;

    printf("\n 1 - Converter Dolar para Real\n 2 - Converter Real para Dolar\n Escolha uma das opcoes: ");
    scanf(" %d", &opcao);

    switch(opcao) {
        case 1:
            printf("\nDigite quantos dolares quer converter: ");
            scanf(" %f", &valor);
            printf("U$%.2f sao R$%.2f", valor, valor * 5.3);
            break;

        case 2:
            printf("\nDigite quantos reais quer converter: ");
            scanf(" %f", &valor);
            printf("R$%.2f sao U$%.2f", valor, valor / 5.3);
            break;

        default:
            printf("\nOpcao invalida");
    }

    return (0);
}