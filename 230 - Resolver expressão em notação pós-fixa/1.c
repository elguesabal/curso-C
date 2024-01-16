#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
    float valor;
    struct no *proximo;
} No;

No *empilhar(No *pilha, float num) {
    No *novo = malloc(sizeof(No));

    if(novo) {
        novo->valor = num;
        novo->proximo = pilha;
        return novo;
    } else
        printf("\tErro ao alocar memoria!\n");
    return NULL;
}

No *desempilhar(No **pilha) {
    No *remover = NULL;

    if(*pilha) {
        remover = *pilha;
        *pilha = remover->proximo;
    } else
        printf("\tPilha vazia!\n");
    return remover;
}

float operacao(float a, float b, char x) {
    switch(x) {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '/':
            return a / b;
            break;
        case '*':
            return a * b;
            break;
        default:
            return 0.0;
    }
}

float resolver_expressao(char x[]) {
    char *pt = strtok(x, " ");
    float num;
    No *n1, *n2, *pilha = NULL;
    while(pt) {
        if(pt[0] == '+' || pt[0] == '-' || pt[0] == '/' || pt[0] == '*') {
            n1 = desempilhar(&pilha);
            n2 = desempilhar(&pilha);
            num = operacao(n2->valor, n1->valor, pt[0]);
            pilha = empilhar(pilha, num);
            free(n1);
            free(n2);
        } else {
            num = strtol(pt, NULL, 10);
            pilha = empilhar(pilha, num);
        }
        pt = strtok(NULL, " ");
    }
    n1 = desempilhar(&pilha);
    num = n1->valor;
    free(n1);
    return num;
}

int main() {
    char exp[50] = "51 13 12 * +";
    printf("Resultado de %s: %f\n", exp, resolver_expressao(exp));
    return 0;
}