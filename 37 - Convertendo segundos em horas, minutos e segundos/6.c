#include <stdio.h>

int main() {
    int totalSegundos, horas, minutos, segundos;

    printf("\nDigite uma quantidade de segundos: ");
    scanf(" %d", &totalSegundos);

    segundos = totalSegundos % 60;
    minutos = totalSegundos / 60 % 60;
    horas = totalSegundos / 60 / 60;

    printf("\n%d:%d:%d\n\n", horas, minutos, segundos);

    return (0);
}