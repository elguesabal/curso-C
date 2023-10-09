#include <stdio.h>

int main() {
    long double graos = 1, totalGraos = 1;

    for(int i = 1; i < 64; i++) {
        graos *= 2;
        totalGraos += graos;
    }

    // printf("\nAo total sao %Lf graos\n\n", totalGraos); printf nao suporta imprimir um numero tao grande
    __mingw_printf("\nAo total sao %.0Lf graos\n\n", totalGraos);

    return (0);
}