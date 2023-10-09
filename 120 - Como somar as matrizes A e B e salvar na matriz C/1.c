#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[3][3], b[3][3], c[3][3];

    srand(time(NULL));

    printf("\nMatriz A:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            a[i][j] = rand() % 100;
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            b[i][j] = rand() % 100;
            printf("%2d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz C:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%3d ", c[i][j]);
        }
        printf("\n");
    }

    return (0);
}