#include <stdio.h>

void strPrint(char str[]) {
    for(int i = 0; str[i]; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[50] = "Ola. Bom dia!";

    strPrint(str);

    return (0);
}