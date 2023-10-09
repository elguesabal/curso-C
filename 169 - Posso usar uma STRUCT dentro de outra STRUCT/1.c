#include <stdio.h>

typedef struct {
    int dia, ano, mes;
}nascimento;

typedef struct {
    nascimento nascimento;
    int idade;
    char sexo;
    char nome[100];
}pessoa;

int main() {
    pessoa pessoa;

    printf("\nDigite seu nome: ");
    scanf(" %100[^\n]", &pessoa.nome);

    printf("Digite sua iadade: ");
    scanf(" %d", &pessoa.idade);

    printf("Digite f ou m para sexo: ");
    scanf(" %c", &pessoa.sexo);

    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf(" %d %d %d", &pessoa.nascimento.dia, &pessoa.nascimento.mes, &pessoa.nascimento.ano);

    printf("\nNome: %s\nIdade: %d\nSexo: %c\nData de nascimento: %d/%d/%d\n\n", pessoa.nome, pessoa.idade, pessoa.sexo, pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);

    return (0);
}