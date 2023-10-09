#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num[10];

    srand(time(NULL));

    for(int i = 0; i < 10; i++) {
        num[i] = rand();
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }

    return (0);
}