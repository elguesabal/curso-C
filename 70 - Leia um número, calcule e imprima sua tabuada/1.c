#include <stdio.h>

int main() {
    int valor;

    do {
        printf("Digite um numero entre 1 e 10: ");
        scanf(" %d", &valor);
    } while(valor < 1 || valor > 10);

    for(int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", valor, i, valor * i);
    }

    return (0);
}