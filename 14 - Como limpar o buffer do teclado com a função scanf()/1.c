#include <stdio.h>

int main() {
    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);

    // tbm limpa o buffer do teclado
    // scanf("%c");

    printf("Digite uma letra: ");
    scanf(" %c", &b),

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return (0);
}