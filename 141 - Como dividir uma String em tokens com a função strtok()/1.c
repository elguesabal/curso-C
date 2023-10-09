#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "Bom dia simpatia!";
    char *ponteiro;

    ponteiro = strtok(str, " ");
    while(ponteiro) {
        printf("token: %s\n", ponteiro);
        ponteiro = strtok(NULL, " ");
    }

    return(0);
}