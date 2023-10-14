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
            scanf(" %100[^\n] %d %f", nome, &idade, &altura);
            fprintf(file, "%s %d %.2f\n", nome, idade, altura);
            printf("\nDigite 1 para inserir outro registro. ");
            scanf(" %d", &opcao);
        } while(opcao == 1);
        fclose(file);
    } else {
        printf("\n\t--> ERRO ao abrir o arquivo!\n\n");
    }
}

void ler(char f[]) {
    FILE *file = fopen(f, "r");
    char nome[500];
    int idade;
    float altura;

    if(file) {
        printf("Dados lidos do arquivo:\n");
        while(fscanf(file, "%s%d%f", nome, &idade, &altura) != -1) {
            printf("\n\tNome: %s\n\tIdade: %d\n\tAltura: %.2f\n\n", nome, idade, altura);
        }
        fclose(file);
    } else {
        printf("\n\t--> ERRO ao abrir o arquivo!\n\n");
    }
}

int main() {
    char nome[] = {"dados.txt"};

    escrever(nome);
    ler(nome);

    return (0);
}