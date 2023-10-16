#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int dia, mes, ano;
} Contato;

void escrever(char arq[]) {
    Contato c;
    FILE *file = fopen(arq, "ab");

    if(file) {
        printf("Digite o nome e a data de nascimento (dd mm aaaa): ");
        scanf(" %49[^\n] %d %d %d", c.nome, &c.dia, &c.mes, &c.ano);
        fwrite(&c, sizeof(Contato), 1, file);
        fclose(file);
    } else {
        printf("\nErro ao abrir o arquivo!\n");
    }
}

int main() {
    char arquivo[] = "agenda.dat";

    escrever(arquivo);

    return (0);
}