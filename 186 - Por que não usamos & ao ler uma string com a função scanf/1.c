#include <stdio.h>

int main() {
    char palavra[100];

    // scanf(" %100[^\n]", palavra);
    // printf("%s\n", palavra);

    printf("%p\n", palavra);
    printf("%p\n", &palavra);
    printf("%p\n", &palavra[0]);

    return (0);
}