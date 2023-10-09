#include <stdio.h>

int main() {
    int n = 10;
    int *p;

    printf("Valor de n: %d\n", n);
    printf("Endereco de n: %p\n\n", &n);


    p = &n;
    printf("Valor de p: %p\n", p);
    printf("Endereco de p: %p\n", &p);
    printf("Valor apontado por p: %d\n", *p);

    return (0);
}