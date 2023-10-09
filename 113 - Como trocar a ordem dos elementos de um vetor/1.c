#include <stdio.h>

int main() {
    int n1[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n2[20];

    for(int i = 0, j = 19; i < 20; i++, j--) {
        n2[i] = n1[j];
        printf("\nValor de n[%d] = %d", i, n2[i]);
    }

    return (0);
}