#include <stdio.h>

int main() {
    int mes;

    printf("Digite o numero de um mes: ");
    scanf(" %d", &mes);

    switch(mes) {
        case 1:
            printf("\nJaneiro\n\n");
            break;

        case 2:
            printf("\nFevereivo\n\n");
            break;

        case 3:
            printf("\nMarco\n\n");
            break;

        case 4:
            printf("\nAbril\n\n");
            break;

        case 5:
            printf("\nMaio\n\n");
            break;

        case 6:
            printf("\nJunho\n\n");
            break;

        case 7:
            printf("\nJulho\n\n");
            break;

        case 8:
            printf("\nAgosto\n\n");
            break;

        case 9:
            printf("\nSetembro\n\n");
            break;

        case 10:
            printf("\nOutubro\n\n");
            break;

        case 11:
            printf("\nNovembro\n\n");
            break;

        case 12:
            printf("\nDezembro\n\n");
            break;

        default:
            printf("Valor nao corresponde a nenhum mes");
    }

    return (0);
}