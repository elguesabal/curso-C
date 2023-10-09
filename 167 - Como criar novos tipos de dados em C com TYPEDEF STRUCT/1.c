#include <stdio.h>
#include <string.h>

typedef struct{
    int idade;
    char sexo;
    char nome[100];
}pessoa1;

struct pessoa2{
    int idade;
    char sexo;
    char nome[100];
};

int main() {
    pessoa1 pessoa1;

    pessoa1.idade = 35;
    pessoa1.sexo = 'f';
    strcpy(pessoa1.nome, "Maria");

    printf("Nome: %s\nIdade: %d\nSexo: %c", pessoa1.nome, pessoa1.idade, pessoa1.sexo);

    printf("\n\n");

    struct pessoa2 pessoa2;

    pessoa2.idade = 35;
    pessoa2.sexo = 'f';
    strcpy(pessoa2.nome, "Maria");

    printf("Nome: %s\nIdade: %d\nSexo: %c", pessoa2.nome, pessoa2.idade, pessoa2.sexo);

    return (0);
}