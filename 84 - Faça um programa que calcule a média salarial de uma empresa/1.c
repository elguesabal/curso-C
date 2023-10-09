#include <stdio.h>

int main() {
    int funcionarios;
    float salario, somaSalario = 0, menorSalario = 1000000, maiorSalario = 0;

    do {
        printf("Quantos funcionarios tem na empresa? ");
        scanf(" %d", &funcionarios);
    } while(funcionarios < 1);

    for(int i = 1; i <= funcionarios; i++) {
        do {
            printf("Digite o salario do funcionario %d°: ", i);
            scanf(" %f", &salario);
        } while(salario <= 0);

        somaSalario += salario;

        if(maiorSalario < salario) {
            maiorSalario = salario;
        }

        if(menorSalario > salario) {
            menorSalario = salario;
        }
    }

    printf("\nA media de salario dos %d funcionarios e: R$%.2f", funcionarios, somaSalario / funcionarios);
    printf("\nO maior salario e: R$%.2f", maiorSalario);
    printf("\nO menor salario e: R$%.2f\n\n", menorSalario);

    return (0);
}