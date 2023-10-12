#include <stdio.h>

int main() {
    FILE *file;
    char letra;

    file = fopen("conto.txt", "w");

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

    return (0);
}