#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printN(int mat[5][5]) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int somaColuna(int mat[5][5], int coluna) {
    int soma = 0;

    for(int i = 0; i < 5; i++) {
        soma += mat[i][coluna];
    }

    return (soma);
}

void printSomas(int mat[5][5]) {
    for(int i = 0; i < 5; i++) {
        printf("\nSoma da coluna %d: %d", i, somaColuna(mat, i));
    }
}

int main() {
    int mat[5][5];

    srand(time(NULL));

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            mat[i][j] = rand() % 10;
        }
    }

    printN(mat);
    printSomas(mat);
    
    return (0);
}