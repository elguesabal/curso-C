#include <stdio.h>

int main() {

    for(int i = 1; i < 10; i += 2) {
        for(int j = i + 6; j > i + 3; j--) {
            printf("\ni = %d\tj = %d", i, j);
        }
    }

    return (0);
}