#include <stdio.h>

int main() {
    int opcao;
    float n1, n2;

    do {
        printf("\n\t-------------------------\n\t1 - Somar\n\t2 - Subtrair\n\t3 - Multiplicar\n\t4 - Dividir\n\t0 - Sair\n\n\tEscolha uma opcao: ");
        scanf(" %d", &opcao);

        if(opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4) {
           printf("\tEscolha os dois numeros: ");
           scanf(" %f %f", &n1, &n2); 
        }

        switch(opcao){
            case 1:
                printf("\n\tA somas dos dois numero e: %.0f\n", n1 + n2);
                break;

            case 2:
                printf("\n\tA subtracao dos dois numero e: %.0f\n", n1 - n2);
                break;

            case 3:
                printf("\n\tA multiplicacao dos dois numero e: %.0f\n", n1 * n2);
                break;

            case 4:
                if(n2 == 0) {
                    printf("\n\tNao existe divisao por zero\n");
                    break;
                } else {
                    printf("\n\tA divisao dos dois numero e: %.2f\n", n1 / n2);
                }
                break;

            case 0:
                printf("\n\tSaindo do programa...\n\n");
                break;

            default:
                printf("\n\tOpcao invalida\n");
        }
    } while(opcao != 0);

    return (0);
}