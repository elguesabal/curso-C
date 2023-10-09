#include <stdio.h>

int potencia(int x, int n) {
    // if(n == 0) {
    //     return (1);
    // }
    // if(n > 2) {
    //     return (x * potencia(x, n - 1));
    // }
    // return (x * x);

    // return (n > 2 ? x * potencia(x, n - 1) : x * x);

    return (n == 0 ? 1 : x * potencia(x, n - 1));
}

int main() {
    int x, n;

    printf("Digite o valor para X e para N: ");
    scanf(" %d %d", &x, &n);

    printf("Resultado de %d elevado a %d: %d\n\n", x, n, potencia(x, n));

    return (0);
}