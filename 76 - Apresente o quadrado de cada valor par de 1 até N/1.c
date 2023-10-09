#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero: ");
    scanf(" %d", &N);

    for(int i = 2; i <= N; i += 2) {
        printf("%d ", i * i);
    }

    return(0);
}