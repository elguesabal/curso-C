#include <stdio.h>

int main() {
    int idade, menorIdade = 999, maiorIdade = 0, pessoas, mulheresSalario = 0;
    char sexo;
    float salario, somaSalario = 0;

    do {
        printf("Quantas pessoas estao participando desta pesquisa? ");
        scanf(" %d", &pessoas);
    } while(pessoas < 2);

    for(int i = 1; i <= pessoas; i++) {
        printf("Informe a idade da pessoa %d: ", i);
        scanf(" %d", &idade);

        if(maiorIdade < idade) {
            maiorIdade = idade;
        }
        
        if(menorIdade > idade) {
            menorIdade = idade;
        }

        printf("Informe o sexo (M/F) da pessoa %d: ", i);
        scanf(" %c", &sexo);

        printf("Informe o salario da pessoa %d: ", i);
        scanf(" %f", &salario);

        if(sexo == 'F' && salario <= 2000) {
            mulheresSalario++;
        }

        somaSalario += salario;

        printf("\n");
    }

    printf("\nA media do salario das %d pessoas e: R$%.2f", pessoas, somaSalario / pessoas);
    printf("\nA maior idade do grupo e de %d anos e a menor idade e de %d", maiorIdade, menorIdade);
    printf("\nTem %d mulheres com salarios ate R$2000,00\n\n", mulheresSalario);

    return (0);
}