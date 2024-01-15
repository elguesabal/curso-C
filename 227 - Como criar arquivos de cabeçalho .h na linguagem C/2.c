#include "pilha.h"

No *empilhar(No *pilha, int num) {
    No *novo = malloc(sizeof(No));

    if(novo) {
        novo->valor = num;
        novo->proximo = pilha;
        return novo;
    } else
        printf("Erro ao alocar memoria!\n");
    return NULL;
}

No *desempilhar(No **pilha) {
    No *remover = NULL;

    if(*pilha) {
        remover = *pilha;
        *pilha = remover->proximo;
    } else
        printf("Pilha vazia!\n");
    return remover;
}

void imprimir(No *pilha) {
    printf("\tPILHA\t\n");
    while(pilha) {
        printf("\t%d\n", pilha->valor);
        pilha = pilha->proximo;
    }
    printf("\n");
}