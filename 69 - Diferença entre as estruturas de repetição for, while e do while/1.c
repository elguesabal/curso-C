#include <stdio.h>

int main() {
    
    printf("\nGerado com for: ");
    for (int i = 0; i <= 10; i++) {
        printf("%d ", i);
    }

    int i;

    printf("\nGerado com while: ");
    i = 0;
    while(i <= 10) {
        printf("%d ", i);
        i++;
    }

    printf("\nGerado com do while: ");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while(i <= 10);

    return (0);
}