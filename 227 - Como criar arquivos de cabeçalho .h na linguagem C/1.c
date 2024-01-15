#include "pilha.h"

int fatorial(int num) {
    No *pilha = NULL, *remover;

    while(num > 1) {
        pilha = empilhar(pilha, num);
        num--;
    }

    imprimir(pilha);

    while(pilha) {
        remover = desempilhar(&pilha);
        num = num * remover->valor;
        free(remover);
    }

    return num;
}

int main() {
    int valor;

    printf("Digite um numero maior que zero para o fatorial: ");
    scanf("%d", &valor);
    printf("\tFatorial de %d: %d\n", valor, fatorial(valor));

    return 0;
}