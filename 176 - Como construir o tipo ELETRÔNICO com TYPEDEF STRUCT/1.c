#include <stdio.h>

typedef struct {
    char tipo[100];
    char marca[50];
    char modelo[25];
    char energia;
    char descricao[500];
    int quantidade;
    int codigo;
}eletronico;

void printEletronico(eletronico eletronico) {
    printf("\n\tTipo: %s", eletronico.tipo);
    printf("\n\tMarca: %s", eletronico.marca);
    printf("\n\tModelo: %s", eletronico.modelo);
    printf("\n\tEnergia %c", eletronico.energia);
    printf("\n\tQuantidade: %d", eletronico.quantidade);
    printf("\n\tDescricao: %s", eletronico.descricao);
}

eletronico lerEletronico() {
    eletronico eletronico;

    printf("Digite o tipo: ");
    scanf(" %100[^\n]", &eletronico.tipo);

    printf("Marca: ");
    scanf(" %50[^\n]", &eletronico.marca);

    printf("Modelo: ");
    scanf(" %25[^\n]", &eletronico.modelo);

    printf("Eficiencia energetica: ");
    scanf(" %c", &eletronico.energia);

    printf("Descricao: ");
    scanf(" %500[^\n]", &eletronico.descricao);

    printf("Quantidade: ");
    scanf(" %d", &eletronico.quantidade);

    printf("Codigo: ");
    scanf(" %d", &eletronico.codigo);

    return (eletronico);
}

int main() {
    eletronico eletronico;

    eletronico = lerEletronico();
    printEletronico(eletronico);

    return (0);
}