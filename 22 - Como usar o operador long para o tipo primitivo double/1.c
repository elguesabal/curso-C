#include <stdio.h>

int main() {
    long double x = 3.14154565465453453453;

    printf("Valor de x: %Lf\n", x); // no windows nao e possivel imprimir um long double
    __mingw_printf("Valor de x: %.10Lf\n", x); // forma paleativa feita pelo compilador para imprimir um long double

    printf("Um long doble precisa de %d bytes de memoria\n", sizeof(x));

    return (0);
}