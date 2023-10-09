#include <stdio.h>

int idade3 = 20;

void imprimir(int idade2) {
    printf("%d", idade2);
    printf("%d", idade3);
}

int main() {
    int idade1 = 10;

    imprimir(idade1);

    printf("%d", idade1);
    printf("%d", idade3);

    return (0);
}