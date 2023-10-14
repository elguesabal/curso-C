#include <stdio.h>
#include <string.h>

void escrever(char f[]) {
    FILE *file = fopen(f, "w");
    char nome[500];
    int idade, opcao = 0;
    float altura;

    if(file) {
        do {
            printf("Digite nome, idade e altura: ");
            scanf(" %100[^ \n] %d %f", nome, &idade, &altura);
            fprintf(file, "%s %d %.2f\n", nome, idade, altura);
            printf("\nDigite 1 para inserir outro registro. ");
            scanf(" %d", &opcao);
        } while(opcao == 1);
        fclose(file);
    } else {
        printf("\n\t--> ERRO ao abrir o arquivo!\n\n");
    }
}

int main() {
    char nome[] = {"dados.txt"};

    escrever(nome);

    return (0);
}