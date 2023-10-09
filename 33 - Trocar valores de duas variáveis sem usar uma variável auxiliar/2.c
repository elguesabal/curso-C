#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    printf("a: %d\tb: %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a: %d\tb: %d\n\n", a, b);

    return (0);
}