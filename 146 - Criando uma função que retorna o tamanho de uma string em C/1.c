#include <stdio.h>
#include <string.h>

int tam(char str[]) {
    int i = 0;

    while(str[i]) {
        i++;
    }

    return (i);
}

int main() {
    char str[50] = "teste";

    printf("Retorno: %d", tam(str));

    return (0);
}