#include <stdio.h>

int main() {
    int a;

    printf("\nDigite um valor qualuqer: ");
    scanf(" %d", &a);

    if(!(a < 0)) {
        printf("\n\tValor positivo ou zero\n\n");
    } else {
        printf("\n\tValor negativo\n\n");
    }

    return (0);
}