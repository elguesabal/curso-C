#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *proximo;
} No;

void inserir_na_fila(No **fila, int num) {
    No *novo = malloc(sizeof(No)), *aux;
    if(novo) {
        novo->valor = num;
        novo->proximo = NULL;
        if(!*fila) {
            *fila = novo;
        } else {
            aux = *fila;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    } else
        printf("\n\nErro ao alocar memoria!\n");
    return NULL;
}

No *remover_da_fila(No **fila) {
    No *remover = NULL;
    if(*fila) {
        remover = *fila;
        *fila = remover->proximo;
    } else
        printf("\tFila vazia\n");
    return remover;
}

int main() {

    return 0;
}