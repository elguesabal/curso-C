#include <stdio.h>
#include <string.h>

int main() {
    int tam;
    char str1[10] = " %", str2[10];

    printf("Digite o tamanho do vetor: ");
    scanf(" %d", &tam);

    snprintf(str2, 10, "%d[^\n]", tam);
    strcat(str1, str2);

    char palavras[tam];
    printf("Digite uma frase: ");
    scanf(str1, palavras);
    printf("%s\n", palavras);

    return (0);
}