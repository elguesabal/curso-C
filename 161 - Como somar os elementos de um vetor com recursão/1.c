#include <stdio.h>

int maior(int vet[], int tam, int i) {
    if(tam == 0) {
        return (vet[i]);
    } else {
        if(vet[tam - 1] > vet[i]) {
            return (maior(vet, tam - 1, tam - 1));
        } else {
            return (maior(vet, tam - 1, i));
        }
    }
}

int main() {
    int vet[10] = {11, 258, 13, 445, 58, 66, 7, 8, 9, 10};

    printf("Maior: %d\n\n", maior(vet, 10, 0));

    return (0);
}