#include <stdio.h>

int soma(int n) {
    // if(n > 0) {
    //     return (soma(n - 1) + n);
    // } else {
    //     return (0);
    // }

    return (n > 0 ? soma(n - 1) + n : 0);
}

int main() {
    int n;

    printf("Digite N: ");
    scanf(" %d", &n);

    printf("Soma de 1 ate %d: %d\n\n", n, soma(n));

    return (0);
}