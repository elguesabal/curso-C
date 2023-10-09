#include <stdio.h>

int main() {
    int a;

    printf("\nDigite um numero qualquer: ");
    scanf(" %d", &a);

    printf("\nResultado logico: %d", a < 0);

    if(a < 0) 
        printf("\n\n\tValor negativo\n\n");
    else
        printf("\n\n\tValor positivo ou zero\n\n");
        printf("\n\t**Valor positivo ou zero**\n\n");

    return (0);
}