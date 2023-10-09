#include <stdio.h>

int main() {
    int mes;

    printf("Digite o numero de um mes: ");
    scanf(" %d", &mes);

    switch(mes) {
        case 1:
            printf("\nJaneiro tem 31 dias\n\n");
            break;

        case 2:
            printf("\nFevereivo tem 28 dias\n\n");
            break;

        case 3:
            printf("\nMarco tem 31 dias\n\n");
            break;

        case 4:
            printf("\nAbril tem 30 dias\n\n");
            break;

        case 5:
            printf("\nMaio tem 31 dias\n\n");
            break;

        case 6:
            printf("\nJunho tem 30 dias\n\n");
            break;

        case 7:
            printf("\nJulho tem 31 dias\n\n");
            break;

        case 8:
            printf("\nAgosto tem 31 dias\n\n");
            break;

        case 9:
            printf("\nSetembro tem 30 dias\n\n");
            break;

        case 10:
            printf("\nOutubro tem 31 dias\n\n");
            break;

        case 11:
            printf("\nNovembro tem 30 dias\n\n");
            break;

        case 12:
            printf("\nDezembro tem 31 dias\n\n");
            break;

        default:
            printf("Valor nao corresponde a nenhum mes");
    }

    return (0);
}