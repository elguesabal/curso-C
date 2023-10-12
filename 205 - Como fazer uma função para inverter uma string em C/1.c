#include <stdio.h>
#include <string.h>

void inverter1(char vet[]) {
    int aux, fim, tam = strlen(vet);

    fim = tam - 1;
    for(int i = 0; i < tam / 2; i++) {
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim--;
    }
}

char* inverter2(char vet[]) {
    int i, aux, fim, tam = strlen(vet);
    char *novo = malloc((tam + 1) * sizeof(char));

    fim = tam - 1;
    for(i = 0; i < tam / 2; i++) {
        novo[fim] = vet[i];
        fim--;
    }
    novo[i] = '\0';
    return (novo);
}

int main() {
    char palavra[25] = {"Muito bem feito!"};
    char *p;

    printf("%s\n", palavra);
    inverter(palavra);
    printf("%s\n", palavra);

    p = inverter2(palavra);
    printf("%s\n", p);

    return (0);
}