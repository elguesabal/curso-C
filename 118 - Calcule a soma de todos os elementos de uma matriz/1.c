#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m[5][7], soma = 0;

    srand(time(NULL));

    printf("\nNumeros da matriz:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 7; j++) {
            m[i][j] = rand() % 100;
            printf("%2d ", m[i][j]);
            soma += m[i][j];
        }
        printf("\n");
    }
    
    printf("\nSoma de todos os numeros da matriz: %d", soma);

    return (0);
}