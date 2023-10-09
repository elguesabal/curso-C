#include <stdio.h>

int main() {
    char palavra[] = "Oi. Vamos aprender a programar com linguagem C?";
    int i;

    i = 0;
    while(palavra[i] != '\0') {
        i++;
    }

    printf("%d", i);

    return(0);
}