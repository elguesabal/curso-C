#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m[5][10], linha[5] = {0}, coluna[10] = {0};

    srand(time(NULL));

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 10; j++) {
            m[i][j] = rand() % 100;
            printf("%2d ", m[i][j]);
            linha[i] += m[i][j];
        }
        printf("\n");
    }
    
    printf("\n");

    for(int i = 0; i < 5; i++) {
        printf("\nSoma linha %d: %d", i, linha[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 5; j++) {
            coluna[i] += m[j][i];
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("\nSoma coluna %d: %d", i, coluna[i]);
    }

    return (0);
}