#include <stdio.h>

int main() {
    int senha;

    printf("Digite a senha: ");
    scanf(" %d", &senha);

    // do {         Q MERDA EU PENSEI AKI KKKKKKKK
    //     if(senha != 12345) {
    //         printf("\nSenha invalida\n\nDigite a senha novamente: ");
    //         scanf(" %d", &senha);
    //     }
    // } while(senha != 12345);

    while(senha != 12345) {
        printf("\nSenha invalida\n\nDigite a senha novamente: ");
        scanf(" %d", &senha);
    }

    printf("\nAcesso permitido\n\n");

    return (0);
}