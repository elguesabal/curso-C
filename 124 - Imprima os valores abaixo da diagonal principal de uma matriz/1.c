#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m[4][4];

    srand(time(NULL));

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(i > j) {
                m[i][j] = rand() % 10;
                printf("%d ", m[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return (0);
}