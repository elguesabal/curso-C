#include <stdio.h>
#include <string.h>

void escrever(char f[]) {
    FILE *file = fopen(f, "w");
    char texto[500];

    if(file) {
        printf("\nDigite um texto ou 1 caracter para finalizar:\n");
        scanf(" %500[^\n]", texto);
        while(strlen(texto) > 1) {
            fputs(texto, file);
            fputc('\n', file);
            scanf(" %500[^\n]", texto);
        }
        fclose(file);
    } else {
        printf("\n\t--> ERRO ao abrir o arquivo!\n\n");
    }
}

void ler(char f[]) {
    FILE *file = fopen(f, "r");
    char texto[500];

    if(file) {
        printf("\nTexto lido do arquivo: \n\n");
        while(!feof(file)) {
            if(fgets(texto, 500, file)) {
                printf("%s", texto);
            }
        }
        fclose(file);
        printf("\n");
    } else {
        printf("\nERRO ao abrir o arquivo!\n\n");
    }
}

int main() {
    char nome[] = {"conto.txt"};

    escrever(nome);
    ler(nome);

    return (0);
}