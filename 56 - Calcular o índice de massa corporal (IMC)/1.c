#include <stdio.h>

int main() {
    float massa, altura, imc;

    printf("Digite seu peso e altura: ");
    scanf(" %f %f", &massa, &altura);

    imc = massa / (altura * altura);

    if(imc < 18.5) {
        printf("IMC: %.2f\tAbaixo do peso\n\n", imc);
    } else if(imc >= 18.5 && imc < 25) {
        printf("IMC: %.2f\tPeso normal\n\n", imc);
    } else if(imc >= 25 && imc < 30) {
        printf("IMC: %.2f\tSobrepeso\n\n", imc);
    } else if(imc >= 30 && imc < 35) {
        printf("IMC: %.2f\tObesidade grau 1\n\n", imc);
    } else if(imc >= 35 && imc < 40) {
        printf("IMC: %.2f\tObesidade grau 2\n\n", imc);
    } else {
        printf("IMC: %.2f\tObesidade grau 3\n\n", imc);
    }

    return (0);
}