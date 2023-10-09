#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // int vet1[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    // int vet2[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25}; 
    // int vet3[25];

    // for(int i = 0; i < 25; i++) {
    //     printf("\nvet1[%d] = %d", i, vet1[i]);
    // }

    // printf("\n");

    // for(int i = 0; i < 25; i++) {
    //     printf("\nvet2[%d] = %d", i, vet2[i]);
    // }

    // printf("\n");

    // for(int i = 0; i < 25; i++) {
    //     vet3[i] = vet1[i] + vet2[i];
    //     printf("\nvet3[%d] = %d", i, vet3[i]);
    // }




    int vet1[25], vet2[25], vet3[25];

    srand(time(NULL));

    for(int i = 0; i < 25; i++) {
        vet1[i] = rand() % 100;
        printf("\nvet1[%d] = %d", i, vet1[i]);
    }

    printf("\n");

    for(int i = 0; i < 25; i++) {
        vet2[i] = rand() % 100;
        printf("\nvet2[%d] = %d", i, vet2[i]);
    }

    printf("\n");

    for(int i = 0; i < 25; i++) {
        vet3[i] = vet1[i] + vet2[i];
        printf("\nvet3[%d] = %d", i, vet3[i]);
    }

    return (0);
}