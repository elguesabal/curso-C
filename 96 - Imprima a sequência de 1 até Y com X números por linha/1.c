#include <stdio.h>

int main() {
    int x, y;

    do {
        printf("Digite o valor de X e Y: ");
        scanf(" %d %d", &x, &y);
    } while(x < 1 || y < 1);

    for(int i = 1; i <= y; i) {
        for(int j = 0; j < x && i <= y; j++) {
            printf("%d ", i);
            i++;
        }
        printf("\n");
    }

    return (0);
}