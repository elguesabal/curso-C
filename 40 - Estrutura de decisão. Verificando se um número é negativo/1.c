#include <stdio.h>

int main() {
    int a;

    printf("\nDigite um numero qualquer: ");
    scanf(" %d", &a);

    if(a < 0) {
        printf("\n\tValor negativo\n\n");
    } else {
        printf("\n\tValor positivo ou zero\n\n");
    }

    return (0);
}