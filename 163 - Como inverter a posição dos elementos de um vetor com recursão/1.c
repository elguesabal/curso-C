#include <stdio.h>

void imprimir(int vet[], int tam) {
    if(tam > 0) {
        printf("%2d ", vet[tam - 1]);
        imprimir(vet, tam - 1);
    }
}

void trocar(int vet[], int ini, int fim) {
    int aux;
    if(ini < fim) {
        aux = vet[ini];
        vet[ini] = vet[fim];
        vet[fim] = aux;
        trocar(vet, ini + 1, fim - 1);
    }
}

int main() {
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    imprimir(vet, 10);
    trocar(vet, 0, 9);
    printf("\n");
    imprimir(vet, 10);

    return (0);
}