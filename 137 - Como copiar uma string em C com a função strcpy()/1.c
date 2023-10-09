#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "teste", str2[50];

    strcpy(str2, str1);

    printf("\nResultado: %s\n\n", str2);

    return(0);
}