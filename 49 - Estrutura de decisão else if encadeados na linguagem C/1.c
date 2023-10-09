#include <stdio.h>

int main() {
    int a;

    printf("Digite um valor qualquer: ");
    scanf(" %d", &a);

    if(a < 0) {
        printf("\nValor negativo\n\n");
    } else if(a > 0) {
        printf("\nValor positivo\n\n");
    } else {
        printf("\nValor igual a zero\n\n");
    }

    return (0);
}