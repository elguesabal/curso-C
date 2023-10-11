#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int **mat;

    srand(time(NULL));

    mat = malloc(sizeof(int *) * 5);

    for(int i = 0; i < 5; i++) {
        // mat[i] = malloc(sizeof(int) * 3);
        *(mat + i) = malloc(sizeof(int) * 3);
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            // mat[i][j] = rand() % 100;
            *(*(mat + i) + j) = rand() % 100;
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            // printf("%d ", mat[i][j]);
            printf("%.2d ", *(*(mat + i) + j));
        }
        printf("\n");
    }

    return (0);
}