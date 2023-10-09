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
    } else {
        printf("Erro ao alocar memoria!\n\n");
    }

    return (0);
}