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

void inserir_no_meio(No **lista, int num, int ant) {
    No *novo = malloc(sizeof(No)), *aux;
    if(novo) {
        novo->valor = num;
        if(!*lista) {
            novo->proximo = NULL;
            *lista = novo;
        } else {
            aux = *lista;
            while(aux->valor != ant && aux->proximo)
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    } else
        printf("Erro ao alocar memoria!\n");
}

void inserir_ordenado(No **lista, int num) {
    No *novo = malloc(sizeof(No)), *aux;
    if(novo) {
        novo->proximo = NULL;
        if(*lista) {
            novo->proximo = NULL;
            *lista = novo;
        } else if(novo->valor < (*lista)->valor) {
            novo->proximo = *lista;
            *lista = novo;
        } else {
            aux = *lista;
            while (aux->proximo && novo->valor > aux->proximo->valor)
                *lista = novo;
        }
    } else
        printf("Erro ao alocar memoria!\n");
}

No *remover(No **lista, int num) {
    No *remover = NULL, *aux;
    if(*lista) {
        if(!(*lista)->valor) {
            remover = *lista;
            *lista = remover->proximo;
        } else {
            aux = *lista;
            while(aux->proximo && aux->proximo->valor != num)
                aux = aux->proximo;
            if(aux->proximo) {
                remover = aux->proximo;
                aux->proximo = remover->proximo;
            }
        }
    }
    return remover;
}

No *buscar(No **lista, int num) {
    No *no = NULL, *aux;
    aux = *lista;
    while(aux && aux->valor != num)
        aux = aux->proximo;
    if(aux)
        no = aux;
    return no;
}

void copiar_lista(No **l, No **C) {
    No *aux = *l;
    while(aux) {
        inserir_no_inicio(C, aux->valor);
        aux = aux->proximo;
    }
}

void imprimir(No *no) {
    printf("\n\tLista: ");
    while(no) {
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}

int main() {
    int opcao, valor, anterior;
    No *removido, *A = NULL, *B = NULL, *C = NULL;
    do {
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 - InserirM\n\t4 - InserirO\n\t5 - Remover\n\t6 - Imprimir\n\t7 - Buscar\n\t8 - Copiar\n");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&A, valor);
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&B, valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_fim(&A, valor);
            break;
        case 3:
            printf("Digite um valor e o valor de referencia: ");
            scanf("%d %d", &valor, &anterior);
            inserir_no_meio(&B, valor, anterior);
            break;
        case 4:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_ordenado(&A, valor);
            break;
        case 5:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            removido = remover(&C, valor);
            if(removido) {
                printf("Elemento a ser removido: %d\n", removido->valor);
                free(removido);
            } else {
                printf("Elemento inesistente!\n");
            }
            break;
        case 6:
            printf("\nLista A:\n");
            imprimir(A);
            printf("\nLista B:\n");
            imprimir(B);
            printf("\nLista C:\n");
            imprimir(C);
            break;
        case 7:
            printf("Digite um valor a ser buscado: ");
            scanf("%d", &valor);
            removido = buscar(&C, valor);
            if(removido) {
                printf("Elemento encontrado: %d\n", removido->valor);
            } else {
                printf("Elemento nao encontrado!\n");
            }
            break;
        case 8:
            copiar_lista(&A, &C);
            copiar_lista(&B, &C);
            break;
        default:
            if(opcao)
                printf("Opcao invalida!\n");
            break;
        }
    } while(opcao);
    return 0;
}