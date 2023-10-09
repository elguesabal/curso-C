#include <stdio.h>
#include <string.h>

int main() {
    char str[50], copia[50], copiaRev[50];
    int tam;

    printf("Digite uma frase: ");
    scanf(" %20[^\n]", str);

    for(int i = 0, j = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '!' && str[i] != '?' && str[i] != '.') {
            copia[j] = str[i];
            j++;
        }
    }

    tam = strlen(copia);
    tam--;

    for(int i = 0; tam >= 0; i++) {
        copiaRev[i] = copia[tam];
        tam--;
    }

    printf("str:      %s\ncopia:    %s\ncopiaRev: %s", str, copia, copiaRev);

    !strcmp(copia, copiaRev) ? printf("\nE uma frase palindroma\n\n") : printf("\nNao e uma frase palindroma\n\n");

    return (0);
}