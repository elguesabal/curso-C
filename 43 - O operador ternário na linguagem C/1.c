#include <stdio.h>

int main() {
    int a;

    printf("\nDigite um valor qualuqer: ");
    scanf(" %d", &a);

    // if(a < 0) {
    //     printf("\n\tValor negativo\n\n");
    // } else {
    //     printf("\n\tValor positivo ou zero\n\n");
    // }

    a < 0 ? printf("\n\tValor negativo\n\n") : printf("\n\tValor positivo ou zero\n\n");

    // int n;
    // 10 == 11 ? printf("teste") : n = 10; nao sei pq mas quando tem alguma variavel recebendo valor em caso de falso da erro de compilacao

    return (0);
}