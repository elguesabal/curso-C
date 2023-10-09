#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m1[5][4], m2[4][5];

    srand(time(NULL));

    printf("\nMatriz [5][4]:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            m1[i][j] = rand() % 10;
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz [4][5]:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            m2[i][j] = m1[j][i];
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    return (0);
}