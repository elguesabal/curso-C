#include <stdio.h>

int main() {
    char nome[20];

    printf("Digite seu nome: ");
    // scanf(" %20[^\n]", nome);
    gets(nome);

    printf("\t%s", nome);

    return (0);
}