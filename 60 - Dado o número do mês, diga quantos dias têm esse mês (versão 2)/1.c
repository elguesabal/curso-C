#include <stdio.h>

int main() {
    int mes;

    printf("Digite o numero de um mes: ");
    scanf(" %d", &mes);

    switch(mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\nO mes possui 31 dias\n\n");
            break;

        case 2:
            printf("\nFevereivo tem 28 dias\n\n");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("\nO mes possui 30 dias\n\n");
            break;

        default:
            printf("Valor nao corresponde a nenhum mes");
    }

    return (0);
}