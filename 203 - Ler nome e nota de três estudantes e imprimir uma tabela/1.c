#include <stdio.h>

int main() {
    char nomes[3][30];
    float notas[3];

    for(int i = 0; i < 3; i++) {
        printf("Digite nomes e nota do estudante: ");
        scanf(" %s %f", &nomes[i], &notas[i]);
    }

    printf("\n");

    for(int i = 0; i < 3; i++) {
        printf("\t%s\t%.2f\n", nomes[i], notas[i]);
    }

    return (0);
}