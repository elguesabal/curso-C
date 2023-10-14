#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int dia, mes, ano;
} Contato;

void imprimir(Contato **c, int quant) {
    printf("\n\tLista de contatos:\n");
    printf("\t--------------------------------------\n");
    for(int i = 0; i < quant; i++) {
        printf("\t%d = %2d/%2d/%4d\t%s\n", i + 1, c[i]->dia, c[i]->mes, c[i]->ano, c[i]->nome);
    }
    printf("\t--------------------------------------\n");
}

int cadastras_contato(Contato **c, int quant, int tam) {
    if(quant < tam) {
        Contato *novo = malloc(sizeof(Contato));

        printf("\nDigite o nome do contato: ");
        scanf(" %50[^\n]", novo->nome);
        printf("\nDigite a data de aniversario (dd mm aaaa): ");
        scanf(" %d %d %d", &novo->dia, &novo->mes, &novo->ano);
        c[quant] = novo;
        return (1);
    } else {
        printf("\n\tImpossivel novo cadastro. Vetor cheio!\n");
        return (0);
    }
}

void alterar_contato(Contato **c, int quant) {
    int id;

    imprimir(c, quant);

    printf("\n\tDigite o codigo do contato que deseja alterar: \n");
    scanf(" %d", &id);
    id--;

    if(id >= 0 && id < quant) {
        Contato *novo = malloc(sizeof(Contato));
        printf("\nDigite o nome do contato: ");
        scanf(" %50[^\n]", novo->nome);
        printf("\nDigite a data de aniversario (dd mm aaaa): ");
        scanf(" %d %d %d", &novo->dia, &novo->mes, &novo->ano);
        c[id] = novo;
    } else {
        printf("\n\tCodigo invalido!\n");
    }
}

int main() {
    Contato *agenda[50];
    int tam = 50, quant = 0, opcao;

    do {
        printf("\n\t0 - Sair\n\t1 - Cadastrar\n\t2 - Alterar\n\t3 - Imprimir\n\t4 - Salvar\n\t5 - Ler Arquivo\n\n");
        scanf(" %d", &opcao);

        switch(opcao) {
            case 1:
                quant += cadastras_contato(agenda, quant, tam);
                break;

            case 2:
                alterar_contato(agenda, quant);
                break;

            case 3:
                imprimir(agenda, quant);
                break;

            case 4:
                break;

            case 5:
                break;

            default:
                if(opcao != 0) {
                    printf("\b\tOpcao invalida!\n");
                }
        }
    }while(opcao != 0);

    return (0);
}