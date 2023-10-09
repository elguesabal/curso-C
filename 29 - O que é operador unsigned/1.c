#include <stdio.h>

int main() {
    unsigned int x = 2147483647; // unsigend nao aceita a numero negativo e aumenta a quantidade de numero positivo aceito

    printf("\nValor de x: %u\n\n", x);

    x++;
    printf("\nValor de x: %u\n\n", x);


    unsigned short int y = 55000;

    printf("\nValor de y: %hu\n\n", y);

    return (0);
}