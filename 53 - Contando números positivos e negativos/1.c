#include <stdio.h>

int main() {
    // int n1, n2, n3, n4, n5, positivos = 0, negativos = 0;

    // printf("Digite 5 numeros: \n");
    // scanf(" %d", &n1);
    // scanf(" %d", &n2);
    // scanf(" %d", &n3);
    // scanf(" %d", &n4);
    // scanf(" %d", &n5);

    // if(n1 >= 0) {
    //     positivos++;
    // } else if(n1 < 0) {
    //     negativos++;
    // }

    // if(n2 >= 0) {
    //     positivos++;
    // } else if(n2 < 0) {
    //     negativos++;
    // }

    // if(n3 >= 0) {
    //     positivos++;
    // } else if(n3 < 0) {
    //     negativos++;
    // }

    // if(n4 >= 0) {
    //     positivos++;
    // } else if(n4 < 0) {
    //     negativos++;
    // }

    // if(n5 >= 0) {
    //     positivos++;
    // } else if(n5 < 0) {
    //     negativos++;
    // }

    // printf("\n%d numeros sao positivos e %d sao negativos\n\n", positivos, negativos);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // int n, positivos = 0, negativos = 0;

    // printf("Digite 5 numeros: \n");

    // scanf(" %d", &n);
    // if(n >= 0) {
    //     positivos++;
    // } else if(n < 0) {
    //     negativos++;
    // }

    // scanf(" %d", &n);
    // if(n >= 0) {
    //     positivos++;
    // } else if(n < 0) {
    //     negativos++;
    // }

    // scanf(" %d", &n);
    // if(n >= 0) {
    //     positivos++;
    // } else if(n < 0) {
    //     negativos++;
    // }

    // scanf(" %d", &n);
    // if(n >= 0) {
    //     positivos++;
    // } else if(n < 0) {
    //     negativos++;
    // }

    // scanf(" %d", &n);
    // if(n >= 0) {
    //     positivos++;
    // } else if(n < 0) {
    //     negativos++;
    // }

    // printf("\n%d numeros sao positivos e %d sao negativos\n\n", positivos, negativos);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int n, positivos = 0, negativos = 0;

    printf("Digite 5 numeros: \n");

    for(int i = 0; i < 5; i++) {
        scanf(" %d", &n);
        if(n >= 0) {
            positivos++;
        } else if(n < 0) {
            negativos++;
        }
    }

    printf("\n%d numeros sao positivos e %d sao negativos\n\n", positivos, negativos);

    return (0);
}