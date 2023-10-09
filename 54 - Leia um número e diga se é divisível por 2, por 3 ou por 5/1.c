#include <stdio.h>

int main() {
    int n;

    printf("\nDigite um numero: ");
    scanf(" %d", &n);

    if(n % 2 == 0) {
        printf("\nEste numero e divisivel por 2");
    }

    if(n % 3 == 0) {
        printf("\nEste numero e divisivel por 3");
    }

    if(n % 5 == 0) {
        printf("\nEste numero e divisivel por 5");
    }

    return (0);
}