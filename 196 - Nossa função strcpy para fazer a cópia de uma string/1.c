#include <stdio.h>

int ft_strcpy(char *destino, char *origem) {
    int i = 0;

    // while(origem[i]) {
    //     destino[i] = origem[i];
    //     i++;
    // }

    while(*(origem + i) != '\0') {
        *(destino + i) = *(origem + i);
        i++;
    }

    return (i);
}

int main() {
    char destino[25], origem[] = "teste";

    printf("\nTamanho: %d", ft_strcpy(destino, origem));
    printf("\tDestino: %s\n\n", destino);

    return (0);
}