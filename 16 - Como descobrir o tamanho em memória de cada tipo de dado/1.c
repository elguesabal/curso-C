#include <stdio.h>

int main() {

    printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));
    // 4 bytes = 32 bits

    float x = 1.0;
    printf("Tamanho em memoria de um float: %d bytes\n", sizeof(x));

    return (0);
}