#include <stdio.h>

int main() {
    int vet1[10], vet2[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf(" %d", &vet1[i]);
    }

    for(int i = 0; i < 10; i++) {
        vet2[i] = vet1[i] * vet1[i];
    }

    for(int i = 0; i < 10; i++) {
        printf("\nvet1[%d] = %d", i, vet1[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++) {
        printf("\nvet2[%d] = %d", i, vet2[i]);
    }

    return (0);
}