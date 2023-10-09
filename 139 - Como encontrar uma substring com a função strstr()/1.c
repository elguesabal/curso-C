#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "bom dia";
    char *ponteiro;

    ponteiro = strstr(str, "bom");

    if(ponteiro) {
        printf("Resultado: %c\n\n", *ponteiro);
    } else {
        printf("Ponteiro nulo\n\n");
    }

    return(0);
}