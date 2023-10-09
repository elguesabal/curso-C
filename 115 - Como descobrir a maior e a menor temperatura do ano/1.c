#include <stdio.h>

int main() {
    float temperatura[12], maiorTemperatura = 0, menorTemperatura = 999;
    char mes[12][10] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int posicaoMaiorTemperatura = 0, posicaoMenorTemperatura = 999;

    for(int i = 0; i < 12; i++) {
        printf("Digite a temperatura media do mes de %s: ", mes[i]);
        scanf(" %f", &temperatura[i]);
    }

    for(int i = 0; i < 12; i++) {
        if(maiorTemperatura < temperatura[i]) {
            maiorTemperatura = temperatura[i];
            posicaoMaiorTemperatura = i;
        }

        if(menorTemperatura > temperatura[i]) {
            menorTemperatura = temperatura[i];
            posicaoMenorTemperatura = i;
        }
    }

    printf("\nA maior temperatura foi no mes de %s que marcou %.1f graus", mes[posicaoMaiorTemperatura], temperatura[posicaoMaiorTemperatura]);
    printf("\nA menor temperatura foi no mes de %s que marcou %.1f graus", mes[posicaoMenorTemperatura], temperatura[posicaoMenorTemperatura]);

    return (0);
}