#include <stdio.h>

void maiorMenor(int *vet, int tam, int *menor, int *maior) {
    *menor = *vet;
    *maior = *vet;

    for(int i = 0; i < tam; i++) {
        // if(vet[i] < *menor) {
        //     *menor = vet[i];
        // }
        // if(vet[i] > *maior) {
        //     *maior = vet[i];
        // }

        if(*menor > *(vet + i)) {
            *menor = *(vet + i);
        }
        if(*maior < *(vet + i)) {
            *maior = *(vet + i);
        }
    }
}

int main() {
    int vet[10] = {45, 89, 68, 25, 17, 76, 34, 29, 57, 44};
    int menor, maior;

    maiorMenor(vet, 10, &menor, &maior);

    printf("Menor numero: %d\nMaior numero: %d", menor, maior);

    return (0);
}