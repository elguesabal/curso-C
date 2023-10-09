#include <stdio.h>

int main() {
    int n, positivo = 0, negativo = 0;

    do {
        printf("Digite um valor: ");
        scanf(" %d", &n);

        if(n > 0) {
            positivo++;
        } else if(n < 0) {
            negativo++;
        }
    } while(n != 0);

    printf("Positivos: %d", positivo);
    printf("\nNegativos: %d\n\n", negativo);

    return (0);
}