#include <stdio.h>

int main() {
    float massa;
    int tempo = 0;

    do {
        printf("Digite a massa do material radioativo maior que 0,05 gramas: ");
        scanf(" %f", &massa);
    } while(massa < 0.5);

    while(massa >= 0.05) {
        massa = massa / 2;
        tempo += 50;
    }

    printf("\nO tempo decorrido foi de %d segundos\n", tempo);

    return (0);
}