#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *proximo;
} No;

void inserir_no_inicio(No **lista, int num) {
    No *novo = malloc(sizeof(No));
    if(novo) {
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;
    } else
        printf("Erro ao alocar memoria!\n");
}

void inserir_no_fim(No **lista, int num) {
    No *novo = malloc(sizeof(No)), *aux;
    if(novo) {
        novo->valor = num;
        novo->proximo = NULL;
        if(!*lista) {
            *lista = novo;
        } else {
            aux = *lista;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    } else
        printf("Erro ao alocar memoria!\n");
}

int main() {

    return 0;
}