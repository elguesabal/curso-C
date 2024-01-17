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


int main() {

    return 0;
}