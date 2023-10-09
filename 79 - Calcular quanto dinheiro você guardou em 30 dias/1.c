#include <stdio.h>

int main() {
    int valorInicial = 1, valorFinal = 1;

    for(int i = 1; i < 30; i++) {
        valorInicial = valorInicial * 2;
        valorFinal += valorInicial;
    }

    printf("Ao final do mes terei R$%.2f\n\n", valorFinal / 100.0);

    return (0);
}