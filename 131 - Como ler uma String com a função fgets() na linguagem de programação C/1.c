#include <stdio.h>

int main() {
    char nome[20];

    printf("Digite seu nome: ");
    // scanf(" %20[^\n]", nome);
    // gets(nome);
    fgets(nome, 20, stdin);

    printf("\t%s", nome);

    return (0);
}