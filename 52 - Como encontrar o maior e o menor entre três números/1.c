#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3;

    printf("Digite 3 numeros: ");
    scanf(" %d %d %d", &n1, &n2, &n3);

    if(n1 > n2 && n1 > n3) {
        printf("\nO numero %d e o maior numero entre os 3\n\n", n1);
    } else if(n2 > n1 && n2 > n3) {
        printf("\nO numero %d e o maior numero entre os 3\n\n", n2);
    } else if(n3 > n1 && n3 > n2) {
        printf("\nO numero %d e o maior numero entre os 3\n", n3);
    }

    if(n1 < n2 && n1 < n3) {
        printf("\nO numero %d e o menor numero entre os 3\n\n", n1);
    } else if(n2 < n1 && n2 < n3) {
        printf("\nO numero %d e o menor numero entre os 3\n\n", n2);
    } else if(n3 < n1 && n3 < n2) {
        printf("\nO numero %d e o menor numero entre os 3\n\n", n3);
    }

    return (0);
}