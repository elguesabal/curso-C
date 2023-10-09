#include <stdio.h>

int main() {
    int divisores, valor = 10;

    do {
        divisores = 0;
        valor += 2;
        for(int i = 1; i <= 10; i++) {
            if(valor % i == 0) {
                divisores++;
            }
        }
    } while(divisores != 10);

    printf("Valor: %d\n\n", valor);

    return (0);
}