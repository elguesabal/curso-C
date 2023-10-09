#include <stdio.h>

int main() {
    int idade;
    int num2[] = {1, 5, 9, 15, 43};
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    float notas[3] = {7.5, 8.3, 9.5};

    for(int i = 0; i < 5; i++) {
        printf("%d ", num2[i]);
    }

    printf("\n\n");

    for(int i = 0; i < 5; i++) {
        printf("%c", vogais[i]);
    }

    printf("\n\n");

    for(int i = 0; i < 3; i++) {
        printf("%.2f ", notas[i]);
    }

    return (0);
}