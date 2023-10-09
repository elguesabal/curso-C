#include <stdio.h>

typedef struct {
    int dia, mes, ano;
}Data;

void imprimir(Data *x) {
    printf("%d/%d/%d\n", x->dia, x->mes, x->ano);
}

int main() {
    Data data;
    Data *p;

    p = &data;

    printf("data: %p\tp: %p\n", &data, p);

    data.dia = 29;
    data.mes = 2;
    data.ano = 2021;

    // imprimir(&data);
    imprimir(p);

    return (0);
}