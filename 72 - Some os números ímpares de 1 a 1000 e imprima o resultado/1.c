#include <stdio.h>

int main() {
    int i = 1, soma = 0;

    while(i <= 1000) {
        soma += i;
        i += 2;
    }

    printf("\n%d\n\n", soma);

    return (0);
}