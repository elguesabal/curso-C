#include <stdio.h>

int main() {
    char caracter;
    int n;

    printf("Digite o valor de n: ");
    scanf(" %d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = n - 1; j >= 0; j--) {
            // if(j <= i) {
            //     caracter = '*';
            // } else {
            //     caracter = ' ';
            // }
            // printf("%c", caracter);
            printf(j <= i ? "*" : " ");
        }
        printf("\n");
    }

    return (0);
}
