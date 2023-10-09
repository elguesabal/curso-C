#include <stdio.h>

int main() {
    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b);

    // fflush(); nao funciona em 100% dos casos

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return (0);
}