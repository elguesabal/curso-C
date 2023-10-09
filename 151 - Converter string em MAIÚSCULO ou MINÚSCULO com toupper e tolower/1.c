#include <stdio.h>
#include <ctype.h>

void maiusculo(char s1[], char s2[]) {
    int i = 0;
    while(s1[i]) {
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0';
}

void minusculo(char s1[], char s2[]) {
    int i = 0;
    while(s1[i]) {
        s2[i] = tolower(s1[i]);
        i++;
    }
    s2[i] = '\0';
}

int main() {
    char str1[] = "Ola. Bom dia.";
    char str2[50];

    maiusculo(str1, str2);
    printf("%s\n%s\n\n", str1, str2);

    minusculo(str1, str2);
    printf("%s\n%s\n\n", str1, str2);

    return (0);
}