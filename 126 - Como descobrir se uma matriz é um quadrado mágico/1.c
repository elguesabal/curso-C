#include <stdio.h>

int main() {
    int m[4][4] = {16, 3, 2, 13, 5, 10, 11, 8, 9, 6, 7, 12, 4, 15, 14, 1};
    int soma, diferente = 0;

    // imprime a matriz
    printf("\nMatriz 4x4:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }

    // verifica as linhas e colunas
    for(int i = 0; i < 4; i++) {
        // verifica as linhas
        soma = 0;
        for(int j = 0; j < 4; j++) {
            soma += m[i][j];
        }
        if(soma != 34) {
            diferente++;
        }

        // verifica as colunas
        soma = 0;
        for(int j = 0; j < 4; j++) {
            soma += m[j][i];
        }
        if(soma != 34) {
            diferente++;
        }
    }

    // verifica a diagonal princial
    soma = 0;
    for(int i = 0; i < 4; i++) {
        soma += m[i][i];
    }
    if(soma != 34) {
        diferente++;
    }

    // verifica a diagonal secundaria
    soma = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(i + j == 3) {
                soma += m[i][j];
            }
        }
    }
    if(soma != 34) {
        diferente++;
    }

    // verifica se e um quadrado magico e imprime a resposta
    if(diferente) {
        printf("\nNao e um quadrado magico\n\n");
    } else {
        printf("\nE um quadrado magico\n\n");
    }

    return(0);
}




// codigo para gerar um quadrado magico aleatorio com rand (tenha paciencia para rodar esse codigo kkkkk)
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int m[4][4];
//     int soma, diferente = 0;

//     srand(time(NULL));

//     do {
//         for(int i = 0; i < 4; i++) {
//             for(int j = 0; j < 4; j++) {
//                 m[i][j] = rand() % 100;
//             }
//         }

//         // imprime a matriz
//         printf("\nMatriz 4x4:\n");
//         for(int i = 0; i < 4; i++) {
//             for(int j = 0; j < 4; j++) {
//                 printf("%2d ", m[i][j]);
//             }
//             printf("\n");
//         }

//         // verifica as linhas e colunas
//         for(int i = 0; i < 4; i++) {
//             // verifica as linhas
//             soma = 0;
//             for(int j = 0; j < 4; j++) {
//                 soma += m[i][j];
//             }
//             if(soma != 34) {
//                 diferente++;
//             }

//             // verifica as colunas
//             soma = 0;
//             for(int j = 0; j < 4; j++) {
//                 soma += m[j][i];
//             }
//             if(soma != 34) {
//                 diferente++;
//             }
//         }

//         // verifica a diagonal princial
//         soma = 0;
//         for(int i = 0; i < 4; i++) {
//             soma += m[i][i];
//         }
//         if(soma != 34) {
//             diferente++;
//         }

//         // verifica a diagonal secundaria
//         soma = 0;
//         for(int i = 0; i < 4; i++) {
//             for(int j = 0; j < 4; j++) {
//                 if(i + j == 3) {
//                     soma += m[i][j];
//                 }
//             }
//         }
//         if(soma != 34) {
//             diferente++;
//         }
//     } while(diferente != 0);

//     // verifica se e um quadrado magico e imprime a resposta
//     if(diferente) {
//         printf("\nNao e um quadrado magico\n\n");
//     } else {
//         printf("\nE um quadrado magico\n\n");
//     }

//     return(0);
// }