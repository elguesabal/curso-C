#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "teastae";
    char *letra;

    // letra = strchr(str, 'a');
    letra = strrchr(str, 'a');

    printf("Resultado: %c\n\n", *letra);
    printf("Resultado: %c\n\n", *(letra + 1));

    return(0);
}