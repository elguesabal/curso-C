#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][25];

    for(int i = 0; i < 5; i++) {
        printf("Digite o nome da posicao %d: ", i);
        scanf(" %25[^\n]", nomes[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("Nome na posicao %d: %s\n", i, nomes[i]);
    }

    return (0);
}