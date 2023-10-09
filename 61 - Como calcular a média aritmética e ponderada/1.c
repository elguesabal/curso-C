#include <stdio.h>

int main() {
    char tipo;
    float n1, n2, n3;

    printf("\n\ta - Aritmetica\n\tp - Ponderada\n\tEscolha um tipo: ");
    scanf(" %c", &tipo);

    switch(tipo) {
        case 'a':
            printf("\tDigite as 3 notas: ");
            scanf(" %f %f %f", &n1, &n2, &n3);
            printf("\n\tA media aritimetica e: %.2f\n\n", (n1 + n2 + n3) / 3);
            break;

        case 'p':
            printf("\tDigite as 3 notas: ");
            scanf(" %f %f %f", &n1, &n2, &n3);
            printf("\n\tA media ponderada e: %.2f\n\n", (n1 * 3 + n2 * 3 + n3 * 4) / 10);
            break;

        default:
            printf("\n\tOpcao invalida\n\n");
            break;
    }


    return (0);
}