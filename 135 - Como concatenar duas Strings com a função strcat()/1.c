#include <stdio.h>
#include <string.h>

int main() {
    // char palavra[50] = "Oi.";
    // strcat(palavra, " Vamos aprender a programar com linguagem C?");
    // printf("%s", palavra);

    char str1[50] = "Oi.", str2[50] = " Vamos aprender a programar com linguagem C?";
    strcat(str1, str2);
    printf("%s", str1);

    return(0);
}