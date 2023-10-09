#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int mat[3][3] = {11, 12, 13, 14, 15, 16, 17, 18, 19};

    srand(time(NULL));

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            mat[i][j] = rand();
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }

    return (0);
}