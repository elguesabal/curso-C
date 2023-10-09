#include <stdio.h>

int main() {
    int a;

    printf("\nDigite um valor qualuqer: ");
    scanf(" %d", &a);

    // if(a < 0) {
    //     printf("\n\tValor negativo\n\n");
    // } else {
    //     if(a > 0) {
    //         printf("\n\tValor positivo\n\n");
    //     } else {
    //         printf("\n\tValor igual zero\n\n");
    //     }
    // }

    a < 0 ? printf("\n\tValor negativo\n\n") : 
        a > 0 ? printf("\n\tValor positivo\n\n") : printf("\n\tValor igual zero\n\n");

    return (0);
}