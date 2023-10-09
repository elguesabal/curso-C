#include <stdio.h>

int main() {
    int idade, menorQ170 = 0, maiorQ20 = 0;
    float altura, somaAltura = 0, somaIdade = 0;

    for(int i = 1; i <= 45; i++) {
        printf("Digite a idade do aluno numero %d: ", i);
        scanf(" %d", &idade);

        printf("Digite a altura do aluno numero %d: ", i);
        scanf(" %f", &altura);

        if(altura < 1.70) {
            somaIdade += idade;
            menorQ170++;
        }

        if(idade > 20) {
            somaAltura += altura;
            maiorQ20++;
        }
    }

    printf("\nA idade media dos %d alunos que tem menos de 1,70m e: %.2f", menorQ170, somaIdade / menorQ170);
    printf("\nA altura media dos %d alunos com mais de 20 anos e: %.2f", maiorQ20, somaAltura / maiorQ20);

    return (0);
}