#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tam, *vet;

    srand(time(NULL));

    printf("Digite o tamanho de um vetor: ");
    scanf(" %d", &tam);

    vet = malloc(sizeof(int) * tam);

    if(vet) {
        for(int i = 0; i < tam; i++) {
            // vet[i] = rand() % 100;
            *(vet + i) = rand() % 100;
        }

        for(int i = 0; i < tam; i++) {
            // printf("%d ", vet[i]);
            printf("%d ", *(vet + i));
        }

        printf("\nDigite o novo tamanho do vetor: ");
        scanf(" %d", &tam);

        vet = realloc(vet, tam);

        printf("\nVetor realocado:\n");
        // for(int i = 0; i < tam; i++) {
        //     // vet[i] = rand() % 100;
        //     *(vet + i) = rand() % 100;
        // }

        for(int i = 0; i < tam; i++) {
            // printf("%d ", vet[i]);
            printf("%d ", *(vet + i));
        }

        free(vet);
    } else {
        printf("Erro ao alocar memoria!\n\n");
    }

    return (0);
}