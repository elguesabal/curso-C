#include <stdio.h>

int main() {
    int n1, n2, resultado = 0;

    printf("Digite dois numeros que deseja multiplicar: ");
    scanf(" %d %d", &n1, &n2);

    for(int i = 0; i < n2; i++) {
        resultado += n1;
    }

    printf("\n%d x %d = %d\n\n", n1, n2, resultado);

    return (0);
}