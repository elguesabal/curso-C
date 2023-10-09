#include <stdio.h>

int main() {
    int vet[10] = {45, 89, 68, 25, 17, 76, 34, 29, 57, 44};

    for(int i = 0; i < 10; i++) {
        // printf("Elemento %d: %d\t\tEndereco do elemento: %p\n", i, vet[i], &vet[i]);
        printf("Valor do elemento %d: %d\t\tEndereco do elemento: %p\n", i, *(vet + i), vet + i);
    }

    return (0);
}