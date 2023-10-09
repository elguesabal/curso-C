#include <stdio.h>
#include <string.h>

int main() {
    char str[20], strRev[20];
    int tam;

    printf("Digite uma palavra: ");
    scanf(" %20[^\n]", str);

    tam = strlen(str);
    tam--;

    for(int i = 0; tam >= 0; i++) {
        strRev[i] = str[tam];
        tam--;
    }

    printf("str:    %s\nstrRev: %s", str, strRev);

    !strcmp(str, strRev) ? printf("\nE uma palavra palindroma\n\n") : printf("\nNao e uma palavra palindroma\n\n");

    return (0);
}