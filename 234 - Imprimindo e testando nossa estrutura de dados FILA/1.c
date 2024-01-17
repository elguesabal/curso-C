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

void imprimir(No *fila) {
    printf("\t------------- FILA -------------\n\t");
    while(fila) {
        printf("%d ", fila->valor);
        fila = fila->proximo;
    }
    printf("\n\t----------- FIM FILA -----------\n");
}

int main() {
    No *fila = NULL, *r;
    int opcao, valor;

    do {
        printf("\t0 - Sair\n\t1 - Inserir\n\t2 - Remover\n\t3 - Imprimir\n");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_na_fila(&fila, valor);
            break;
        case 2:
            r = remover_da_fila(&fila);
            if(r) {
                printf("Removido: %d\n", r->valor);
                free(r);
            }
            break;
        case 3:
            imprimir(fila);
            break;
        default:
            if(opcao)
                printf("\nOpcao invalida!\n");
            break;
        }
    } while(opcao);

    return 0;
}