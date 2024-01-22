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

void dividir(No **L, No **P, No **I) {
    No *aux = *L;
    while(aux) {
        if(aux->valor > 0) {
            if(aux->valor % 2 == 0) {
                inserir_no_inicio(P, aux->valor);
            } else {
                inserir_no_inicio(I, aux->valor);
            }
            aux = aux->proximo;
        }
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
    No *lista = NULL, *removido, *Par = NULL, *Impar = NULL;
    do {
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 - InserirM\n\t4 - InserirO\n\t5 - Remover\n\t6 - Imprimir\n\t7 - Buscar\n\t8 - Dividir\n");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista, valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_fim(&lista, valor);
            break;
        case 3:
            printf("Digite um valor e o valor de referencia: ");
            scanf("%d %d", &valor, &anterior);
            inserir_no_meio(&lista, valor, anterior);
            break;
        case 4:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_ordenado(&lista, valor);
            break;
        case 5:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            removido = remover(&lista, valor);
            if(removido) {
                printf("Elemento a ser removido: %d\n", removido->valor);
                free(removido);
            } else {
                printf("Elemento inesistente!\n");
            }
            break;
        case 6:
            printf("\nLista L:\n");
            imprimir(lista);
            printf("\nLista P:\n");
            imprimir(Par);
            printf("\nLista I:\n");
            imprimir(Impar);
            break;
        case 7:
            printf("Digite um valor a ser buscado: ");
            scanf("%d", &valor);
            removido = buscar(&lista, valor);
            if(removido) {
                printf("Elemento encontrado: %d\n", removido->valor);
            } else {
                printf("Elemento nao encontrado!\n");
            }
            break;
        case 8:
            dividir(&lista, &Par, &Impar);
            printf("\nDivisao realizada com sucesso!\n");
            break;
        default:
            if(opcao)
                printf("Opcao invalida!\n");
            break;
        }
    } while(opcao);
    return 0;
}