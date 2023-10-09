#include <stdio.h>

int main () {
    float n1, n2;
    int opcao;

    do{
        do {
            printf("\nDigite a nota da primeira avaliacao: ");
            scanf(" %f", &n1);
        } while(n1 < 0 || n1 > 10);

        do {
            printf("Digite a nota da segunda avaliacao: ");
            scanf(" %f", &n2);
        } while(n2 < 0 || n2 > 10);

        printf("\nA media semestral e: %.2f\n", (n1 + n2) / 2);

        printf("\nNovo calculo? ( 1 - sim\t2 - nao ) ");
        scanf(" %d", &opcao);
    } while(opcao == 1);

    return (0);
}