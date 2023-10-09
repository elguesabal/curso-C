#include <stdio.h>

int main() {
    float dias, totalLiquido, totalBruto;

    printf("Dias trabalhados: ");
    scanf(" %f", &dias);

    totalBruto = dias * 45;
    totalLiquido = totalBruto - totalBruto * 0.08;

    printf("\nValor bruto: R$%.2f", totalBruto);
    printf("\nTotal liquido: R$%.2f\n\n", totalLiquido);

    return (0);
}