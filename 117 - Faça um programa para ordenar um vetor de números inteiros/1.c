#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n[100], sortN, troca;

    srand(time(NULL));

    for(int i = 0; i < 100; i++) {
        n[i] = rand() % 100;
    }

    printf("\nVetor antes de ordernar:\n");
    for(int i = 0; i < 100; i++) {
        printf("%d ", n[i]);
    }

    do {
        troca = 0;
        for(int i = 0; i < 99; i++) {
            if(n[i] > n[i + 1]) {
                sortN = n[i];
                n[i] = n[i + 1];
                n[i + 1] = sortN;
                troca = 1;
            }
        }
    } while(troca);

    printf("\n\nVetor depois de ordernar:\n");
    for(int i = 0; i < 100; i++) {
        printf("%d ", n[i]);
    }

    return (0);
}