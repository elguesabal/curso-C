#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m[7][7];

    srand(time(NULL));

    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7; j++) {
            if(i + j == 6) {
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