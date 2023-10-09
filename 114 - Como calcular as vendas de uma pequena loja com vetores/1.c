#include <stdio.h>

int main() {
    float produtos[10], valorTotal;
    int vendas[10], maisVendido = 0, vetorMaisVendido[10] = {0};

    for(int i = 0; i < 10; i++) {
        do {
            printf("Digite o valor do produto %d: ", i + 1);
            scanf(" %f", &produtos[i]);
        } while(produtos[i] <= 0);
    }

    for(int i = 0; i < 10; i++) {
        do {
            printf("Digite a quantidades vendidas do produto %d: ", i + 1);
            scanf(" %d", &vendas[i]);
        } while(vendas[i] < 0);
    }

    printf("\n\n\tQuantidade vendida de cada produto:");
    for(int i = 0; i < 10; i++) {
        printf("\nQuantidade vendida do produto %d: %d", i + 1, vendas[i]);
    }

    printf("\n\n\tValor unitario de cada produto:");
    for(int i = 0; i < 10; i++) {
        printf("\nValor unitario do produto %d: R$%.2f", i + 1, produtos[i]);
    }

    printf("\n\n\tValor total das vendas e comissao do vendedor:");
    for(int i = 0; i < 10; i++) {
        valorTotal += produtos[i] * vendas[i];
    }
    printf("\nValor total das vendas e: R$%.f", valorTotal);
    printf("\nValor da comissao de 5%% a ser pago: R$%.2f", valorTotal * 0.05);

    printf("\n\n\tValor do produto mais vendido e sua posicao:");
    for(int i = 0; i < 10; i++) {
        if(maisVendido <= vendas[i]) {
            maisVendido = vendas[i];
            vetorMaisVendido[i] = vendas[i];
        }
    }
    for(int i = 0; i < 10; i++) {
        if(vetorMaisVendido[i] == maisVendido) {
            printf("\nO produto %d e o mais vendido e o seu valor e: R$%.2f", i + 1, produtos[i]);
        }
    }

    return (0);
}