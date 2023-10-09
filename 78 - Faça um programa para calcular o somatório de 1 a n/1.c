#include <stdio.h>

int main() {
    int A = 0, n;

    do {
        printf("Informe um numero maior que zero: ");
        scanf(" %d", &n);
    } while(n < 1);

    for(int i = 0; i <= n; i++) {
        A = A + i;
    }

    printf("A soma de 1 ate %d e: %d", n, A);

    return (0);
}