#include <stdio.h>

void binario(int n) {
    // if(n / 2) {
    //     binario(n / 2);
    // }
    // printf("%d", n % 2);

    if(n == 0) {
        printf("0");
    } else {
        binario(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int n;

    printf("Digite um valor decimal: ");
    scanf(" %d", &n);

    binario(n);

    return (0);
}