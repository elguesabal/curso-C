#include <stdio.h>

void escrever(char f[]) {
    FILE *file = fopen(f, "w");
    char letra;

    if(file) {
        printf("\nDigite um texto e pressione ENTER ao finalizar! ");
        scanf("%c", &letra);
        while(letra != '\n') {
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
    } else {
        printf("\n\t--> ERRO ao abrir o arquivo!\n\n");
    }
}

void ler(char f[]) {
    FILE *file = fopen(f, "r");
    char letra;

    if(file) {
        printf("\nTexto lideo do arquivo:\n");
        while(!feof(file)) {
            letra = fgetc(file);
            printf("%c", letra);
        }
        fclose(file);
    } else {
        printf("\n\t--> ERRO ao abrir o arquivo!\n\n");
    }
}

int main() {
    char nome[] = {"conto.txt"};

    escrever(nome);
    ler(nome);

    return (0);
}