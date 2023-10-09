#include <stdio.h>

int main() {
    float real, dolar;

    printf("Quantos reais deseja converter em dolar? R$");
    scanf(" %f", &real);

    dolar = real / 5.3;

    printf("\nR$%.2f = US$%.2f\n\n", real, dolar);

    return (0);
}