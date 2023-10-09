#include <stdio.h>

int main() {
    int opcao;

    printf("1 - Cadastrar protudo\n2 - Vender produto\n2 - Vender produto\n3 - Buscar produto\n4 - Imprimir\n5 - Sair\n\nEscolha uma opcao: ");
    scanf(" %d", &opcao);

    switch(opcao){
        case 1:
            printf("\nCadastrando novo produto\n\n");
            break;

        case 2:
            printf("\nVendendo um novo produto\n\n");
            break;

        case 3:
            printf("\nBuscando novo produto\n\n");
            break;

        case 4:
            printf("\nImprimindo relatorio\n\n");
            break;

        case 5:
            printf("\nSaindo...\n\n");
            break;

        default:
            printf("\nOpcao invalida\n\n");
    }

    return (0);
}