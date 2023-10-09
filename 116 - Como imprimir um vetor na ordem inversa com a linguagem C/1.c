#include <stdio.h>

int main() {
    float n[10], n2[10];
    int opcao;

    for(int i = 0; i < 10; i++) {
        printf("Digite o numero da posicao %d: ", i);
        scanf(" %f", &n[i]);
    }

    do {
        printf("\n\n\t0 - Finaliza o programa\n\t1 - Imprime o vetor na ordem do inicio ao fim\n\t2 - Imprime o vetor na ordem inversa do inicio ao fim\n\n\tEscolha a opcao: ");
        scanf(" %d", &opcao);

        switch(opcao) {
            case 0:
                printf("\n\tSaindo do programa...");
                break;

            case 1:
                for(int i = 0; i < 10; i++) {
                    printf("\n\t%.2f", n[i]);
                }
                break;

            case 2:
                for(int i = 9; i >= 0; i--) {
                    printf("\n\t%.2f", n[i]);
                }
                break;

            default:
                printf("Opcao invalida");
        }
    } while(opcao != 0);

    return (0);
}