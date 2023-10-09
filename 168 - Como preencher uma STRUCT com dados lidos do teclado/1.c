#include <stdio.h>

typedef struct {
    int idade;
    char sexo;
    char nome[100];
}pessoa;

int main() {
    pessoa pessoa;

    printf("\nDigite seu nome: ");
    scanf(" %100[^\n]", &pessoa.nome);
    // fgets(pessoa.nome, 100, stdin);

    printf("Digite sua iadade: ");
    scanf(" %d", &pessoa.idade);

    printf("Digite f ou m para sexo: ");
    scanf(" %c", &pessoa.sexo);

    printf("\nNome: %s\nIdade: %d\nSexo: %c\n\n", pessoa.nome, pessoa.idade, pessoa.sexo);

    return (0);
}