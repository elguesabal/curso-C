#include <stdio.h>

int main() {
    int mat1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char mat2[3][4] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite um valor %d %d: ", i, j);
            scanf(" %d", &mat1[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    return (0);
}