#include <stdio.h>

int main() {
    int n, primo = 0;

    do {
        printf("Digite um numero inteiro maior que 1: ");
        scanf(" %d", &n);
    } while(n < 2);

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            primo++;
        }
    }

    if(primo == 0) {
        printf("\n%d e um numero primo\n\n", n);
    } else {
        printf("\n%d nao e um numero primo\n\n", n);
    }

    return (0);
}