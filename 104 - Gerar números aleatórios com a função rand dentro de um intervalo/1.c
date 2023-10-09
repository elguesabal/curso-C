#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num[40];

    srand(time(NULL));

    for(int i = 0; i < 40; i++) {
        num[i] = 1 + rand() % 99;
    }

    for(int i = 0; i < 40; i++) {
        printf("%d ", num[i]);
    }

    return (0);
}