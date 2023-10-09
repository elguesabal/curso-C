#include <stdio.h>

int main() {
    char palavra[55] = "Oi. Vamos aprender a programar com linguagem C?";
    int i;

    // for(int i = 0; i < 55; i++) {
    //     printf("%2d --> %c = %d\n", i, palavra[i], palavra[i]);
    // }

    i = 0;
    while(palavra[i] != '\0') {
        printf("%c", palavra[i]);
        i++;
    }

    return (0);
}