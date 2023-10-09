#include <stdio.h>

int main() {
    float n1, n2;

    do {
        printf("Imprima as duas notas do semestre (entre 0 a 10): ");
        scanf(" %f %f", &n1, &n2);
    } while(n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10);

    printf("A media do semestre e: %.1f", (n1 + n2) / 2);

    return (0);
}