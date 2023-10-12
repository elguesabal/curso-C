#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vet1, *vet2;

    vet1 = malloc(10 * sizeof(int));
    vet2 = calloc(10, sizeof(int));

    for(int i = 0; i < 10; i++) {
        printf("%d", *(vet1 + 1));
    }

    printf("\n\n");

    for(int i = 0; i < 10; i++) {
        printf("%d", *(vet2 + 1));
    }

    return (0);
}