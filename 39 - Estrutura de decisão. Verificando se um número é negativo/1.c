#include <stdio.h>

int main() {
    int a;

    printf("\nDigite um valor qualquer: ");
    scanf(" %d", &a);

    if(a < 0) {
        printf("\nValor negativo\n");
    }

    return (0);
}