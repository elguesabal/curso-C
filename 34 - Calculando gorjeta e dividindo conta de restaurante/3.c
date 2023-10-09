#include <stdio.h>

int main() {
    float conta, total, valorPessoa, gorjeta;
    int pessoas;

    printf("\nDigite o valor da conta: ");
    scanf(" %f", &conta);

    printf("Porcentagem da gorjeta: ");
    scanf(" %f", &gorjeta);

    printf("Quantidades de pessoas para dividir a conta: ");
    scanf(" %d", &pessoas);

    total = conta + gorjeta / 100 * conta;
    valorPessoa = total / pessoas;

    printf("\nTotal da conta: R$%.2f", total);

    printf("\nCada pessoa vai pagar R$%.2f\n\n", valorPessoa);

    return (0);
}