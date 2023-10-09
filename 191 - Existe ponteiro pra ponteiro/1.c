#include <stdio.h>

int main() {
    int A = 100, *B, **C;

    B = &A;
    C = &B;

    printf("Endereco de A: %p\tConteudo de A: %d\n", &A, A);
    printf("Endereco de B: %p\tConteudo de B: %p\nConteudo apontado por B: %d\n", &B, B, *B);
    printf("Endereco de C: %p\tConteudo de C: %p\nConteudo apontado por C: %d\n", &C, C, **C);

    return (0);
}