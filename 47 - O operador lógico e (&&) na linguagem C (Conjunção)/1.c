#include <stdio.h>

int main() {
    int idade;
    char sexo;

    printf("Digite seu sexo f ou m: ");
    scanf(" %c", &sexo);

    printf("Digite sua idade: ");
    scanf(" %d", &idade);

    if(sexo == 'm' && idade > 18) {
        printf("\nAlistamento obrigatorio\n\n");
    } else {
        printf("\nDispensado\n\n");
    }


    return (0);
}