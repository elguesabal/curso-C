#include <stdio.h>

int main() {
    int y = 0;
    short int x = 32767; // variavel do tipo short pode armazenar numeros entre -32768 ate 32767

    printf("Tamanho de um int na memoria: %d bytes\n", sizeof(y));
    printf("Tamanho de um short int na memoria: %d bytes\n", sizeof(x));

    return (0);
}