#include <stdio.h>

int main() {
    char sexo;
    int idade;
    float peso, altura;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    printf("Informe seu sexo: (f, F, m ou M) ");
    scanf(" %c", &sexo);

    printf("Idade informada: %d\n", idade);
    printf("Peso informado: %.1f\n", peso);
    printf("Altura informada: %.2f\n", altura);
    printf("Sexo informado: %c\n", sexo);
}