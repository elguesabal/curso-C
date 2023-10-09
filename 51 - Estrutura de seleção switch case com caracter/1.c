#include <stdio.h>

int main() {
    char opcao;

    printf("A - Cadastrar protudo\n2 - Vender produto\nB - Vender produto\nC - Buscar produto\nD - Imprimir\nZ - Sair\n\nEscolha uma opcao: ");
    scanf(" %c", &opcao);

    switch(opcao) {
        case 'A':
            printf("\nCadastrando novo produto\n\n");
            break;
        
        case 'B':
            printf("\nVendendo um novo produto\n\n");
            break;

        case 'C':
            printf("\nBuscando novo produto\n\n");
            break;

        case 'D':
            printf("\nImprimindo relatorio\n\n");
            break;

        case 'Z':
            printf("\nSaindo...\n\n");
            break;

        default:
            printf("\nOpcao invalida\n\n");
    }

    return (0);
}