#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogo[10][10];
int imprimirJogo[10][10];
int x, y;
int bombas[20][2];
int opcao;
int bombaX, bombaY;
int nBombas = 0;

// zera todo o jogo
void zerar() {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            jogo[i][j] = 0;
            imprimirJogo[i][j] = 0;
        }
    }
}

// pergunta e salva o numero de bombas selecionadas pelo jogador
void numeroBombas() {
    do{
        printf("Quantas bombas deseja? ");
        scanf(" %d", &nBombas);
    } while(nBombas < 1);
}

// sorteia 3 cordenadas q as bombas vao estar e atribui a variavel jogo
int bombasRandom() {
    zerar();
    srand(time(NULL));
    for(int i = 0; i < nBombas; i++) {
        for(int j = 0; j < 2; j++) {
            bombas[i][j] = rand() % 10;
        }
        jogo[bombas[i][0]][bombas[i][1]] = 9;
    }
    if(jogo[x][y] != 0) {
        bombasRandom();
    }
}

// define o valor de quantas bombas tem na vizinnhanca
void bombasVizinhas() {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(jogo[i][j] == 9) {
                if(jogo[i - 1][j - 1] != 9 && i > 0 && j > 0)
                    jogo[i - 1][j - 1]++;
                if(jogo[i - 1][j] != 9 && i > 0)
                    jogo[i - 1][j]++;
                if(jogo[i - 1][j + 1] != 9 && i > 0 && j < 9)
                    jogo[i - 1][j + 1]++;
                if(jogo[i][j - 1] != 9 && j > 0)
                    jogo[i][j - 1]++;
                if(jogo[i][j + 1] != 9 && j < 9)
                    jogo[i][j + 1]++;
                if(jogo[i + 1][j - 1] != 9 && i < 9 && j > 0)
                    jogo[i + 1][j - 1]++;
                if(jogo[i + 1][j] != 9 && i < 9)
                    jogo[i + 1][j]++;
                if(jogo[i + 1][j + 1] != 9 && i < 9 && j < 9)
                    jogo[i + 1][j + 1]++;
            }
        }
    }
}

// imprime visualmente o jogo
void printJogo() {
    printf("\n\t ");
    for(int i = 0; i < 10; i++) {
        printf("   %d", i);
    }
    printf("\n\t  ");
    for(int i = 0; i < 10; i++) {
        printf("+---");
    }
    for(int i = 0; i < 10; i++) {
        printf("+\n\t%d ", i);
        for(int j = 0; j < 10; j++) {
            if(imprimirJogo[i][j] && jogo[i][j] == 0) {
                printf("|   ");
            } else if(imprimirJogo[i][j] == 100) {
                printf("| X ");
            } else if(imprimirJogo[i][j]) {
                printf("| %d ", jogo[i][j]);
            } else if(!imprimirJogo[i][j]) {
                printf("| ? ");
            }
        }
        printf("|\n\t  ");
        for(int j = 0; j < 10; j++) {
            printf("+---");
        }
    }
    printf("+\n\n");
}

// captura a opcao escolhida
void escolherOpcao() {
    do {
        opcao = 0;
        printf("\n1 - Abrir casa\n2 - Marcar bomba\n\nQual opcao deseja? ");
        scanf(" %d", &opcao);
    } while(opcao != 1 && opcao != 2);
}

// captura e salva a jogada
void escolherJogada() {
    printf("Digite a linha ( X ) e coluna ( Y ): ");
    scanf(" %d %d", &x, &y);
}

// abre a casa escolhida e caso nao tenha nenhuma vizinha bomba abre as outras nao vizinhas bombas
void abrirCasas(int l, int c) {
    imprimirJogo[l][c]++;
    if(jogo[l][c] == 0) {
        if(jogo[l - 1][c - 1] == 0 && imprimirJogo[l - 1][c - 1] == 0 && l > 0 && c > 0) {
            abrirCasas(l - 1, c - 1);
        } else if(jogo[l - 1][c - 1] < 9 && l > 0 && c > 0) {
            imprimirJogo[l - 1][c - 1]++;
        }

        if(jogo[l - 1][c] == 0 && imprimirJogo[l - 1][c] == 0 && l > 0) {
            abrirCasas(l - 1, c);
        } else if(jogo[l - 1][c] < 9 && l > 0) {
            imprimirJogo[l - 1][c]++;
        }

        if(jogo[l - 1][c + 1] == 0 && imprimirJogo[l - 1][c + 1] == 0 && l > 0 && c < 9) {
            abrirCasas(l - 1, c + 1);
        } else if(jogo[l - 1][c + 1] < 9 && l > 0 && c < 9) {
            imprimirJogo[l - 1][c + 1]++;
        }

        if(jogo[l][c - 1] == 0 && imprimirJogo[l][c - 1] == 0 && c > 0) {
            abrirCasas(l, c - 1);
        } else if(jogo[l][c - 1] < 9 && c > 0) {
            imprimirJogo[l][c - 1]++;
        }

        if(jogo[l][c + 1] == 0 && imprimirJogo[l][c + 1] == 0 && c < 9) {
            abrirCasas(l, c + 1);
        } else if(jogo[l][c + 1] < 9 && c < 9) {
            imprimirJogo[l][c + 1]++;
        }

        if(jogo[l + 1][c - 1] == 0 && imprimirJogo[l + 1][c - 1] == 0 && l < 9 && c > 0) {
            abrirCasas(l + 1, c - 1);
        } else if(jogo[l + 1][c - 1] < 9 && l < 9 && c > 0) {
            imprimirJogo[l + 1][c - 1]++;
        }

        if(jogo[l + 1][c] == 0 && imprimirJogo[l + 1][c] == 0 && l < 9) {
            abrirCasas(l + 1, c);
        } else if(jogo[l + 1][c] < 9 && l < 9) {
            imprimirJogo[l + 1][c]++;
        }

        if(jogo[l + 1][c + 1] == 0 && imprimirJogo[l + 1][c + 1] == 0 && l < 9 && c < 9) {
            abrirCasas(l + 1, c + 1);
        } else if(jogo[l + 1][c + 1] < 9 && l < 9 && c < 9) {
            imprimirJogo[l + 1][c + 1]++;
        }
    }
}

// marca a suposta casa com bomba
void marcarBomba() {
    printf("Digite a linha ( X ) e coluna ( Y ): ");
    scanf(" %d %d", &bombaX, &bombaY);
    imprimirJogo[bombaX][bombaY] = 100;
}

int verificarResultado() {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(jogo[i][j] != 9 && imprimirJogo[i][j] == 0) {
                return (1);
            }
        }
    }
    return (0);
}

int main() {

    numeroBombas();
    printJogo();
    escolherJogada();
    bombasRandom();
    bombasVizinhas();
    abrirCasas(x, y);

    do{
        printJogo();
        escolherOpcao();
        if(opcao == 1) {
            escolherJogada();
            abrirCasas(x, y);
        } else if(opcao == 2) {
            marcarBomba();
        }
    } while(jogo[x][y] != 9 && verificarResultado());

    printJogo();

    if(jogo[x][y] == 9) {
        printf("Voce perdeu!\n\n");
    } else {
        printf("Voce ganhou!\n\n");
    }

    return (0);
}