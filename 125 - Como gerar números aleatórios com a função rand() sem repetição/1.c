#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i = 0, vet[25], igual;

    srand(time(NULL));

    do {
        vet[i] = rand() % 50;
        igual = 0;
        for(int j = 0; j < i; j++) {
            if(vet[j] == vet[i]) {
                igual = 1;
            }
        }
        
        if(igual == 0) {
            i++;
        }
    } while(i < 25);

    for(i = 0; i < 25; i++) {
        printf("%d ", vet[i]);
    }

    return (0);
}