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

    printf("%d", sizeof(nascimento));
    printf("%d", sizeof(pessoa));

    return (0);
}