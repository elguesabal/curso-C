#include <stdio.h>

int jogo[5][5], vitoria, jogadas, jogador[3] = {1}, jogadaValida, opcao;
char vitorioso;

// zerando o jogo
void zerarJogo() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            jogo[i][j] = 0;
        }
    }
    vitoria = 0;
    jogadas = 0;
}

// montagem visual do jogo da velha
void imprimirJogo() {
    printf("\n\t\t  1   2   3\t\t");
    for(int i = 0; i < 5; i++) {
        if(i == 0) {
            printf("\n\t\t%d", i + 1);
        } else if(i == 2) {
            printf("\n\t\t%d", i);
        } else if(i == 4) {
            printf("\n\t\t%d", i - 1);
        } else {
            printf("\n\t\t ");
        }
        for(int j = 0; j < 5; j++) {
            if(j == 1 || j == 3) {
                printf("|");
            } else if(i == 1 || i == 3) {
                printf("---");
            } else if(jogo[i][j] == 1) {
                printf(" X ");
            } else if(jogo[i][j] == 2) {
                printf(" O ");
            } else {
                printf("   ");
            }
        }
    }
    printf("\n");
}

// computa a jogada
void computarJogada(char marcador, int jogadorComputado, int proximoJogador) {
    printf("\nVez do jogador %c, escolha a coordenada (linha e coluna): ", marcador);
    scanf(" %d %d", &jogador[1], &jogador[2]);
    while(jogador[1] < 1 || jogador[1] > 3 || jogador[2] < 1 || jogador[2] > 3) {
        printf("\nJogada invalida, escolha a coordenada (linha e coluna): ");
        scanf(" %d %d", &jogador[1], &jogador[2]);
    }
    do {
        if(jogador[1] == 1) {
            jogador[1] = 0;
        } else if(jogador[1] == 3) {
            jogador[1] = 4;
        }
        if(jogador[2] == 1) {
            jogador[2] = 0;
        } else if(jogador[2] == 3) {
            jogador[2] = 4;
        }
        if(jogo[jogador[1]][jogador[2]] == 0) {
            jogo[jogador[1]][jogador[2]] = jogadorComputado;
            jogadaValida = 0;
        } else {
            printf("\nPosicao ja preenchida! Escolha outra posicao: ");
            scanf(" %d %d", &jogador[1], &jogador[2]);
            jogadaValida = 1;
        }
    } while(jogadaValida);
    jogadas++;
    jogador[0] = proximoJogador;
}

// identifica o jogador e computa a jogada com a funcao computarJogada()
void identificarJogador() {
    if(jogador[0] == 1) {
        computarJogada('X', 1, 2);
    } else if(jogador[0] == 2) {
        computarJogada('O', 2, 1);
    }
}


// verifica se ouve vitorioso
void verificaVitorioso() {
    for(int i = 1; i < 3; i++) {
        if((jogo[0][0] == i && jogo[0][2] == i && jogo[0][4] == i) || (jogo[2][0] == i && jogo[2][2] == i && jogo[2][4] == i) || (jogo[4][0] == i && jogo[4][2] == i && jogo[4][4] == i) || (jogo[0][0] == i && jogo[2][0] == i && jogo[4][0] == i) || (jogo[0][2] == i && jogo[2][2] == i && jogo[4][2] == i) || (jogo[0][4] == i && jogo[2][4] == i && jogo[4][4] == i) || (jogo[0][0] == i && jogo[2][2] == i && jogo[4][4] == i) || (jogo[0][4] == i && jogo[2][2] == i && jogo[4][0] == i)) {
            vitoria = i;
        }
    }
}

// printa o resultado
void printResultado() {
    if(vitoria == 1) {
        vitorioso = 'X';
    } else if(vitoria == 2) {
        vitorioso = 'O';
    }
    jogadas == 9 && vitoria == 0 ? printf("\nDeu velha!") : printf("\nJogador %c ganhou!", vitorioso);
}

// pergunta ao jogar se ele queer jogar dnv
void jogarNovamente() {
    printf("\n\nQuer jogar dnv?\n1 - Sim\n0 - Nao\n");
    scanf(" %d", &opcao);
}

int main() {
    do {
        // zerando o jogo
        zerarJogo();
        
        do {
            // montagem visual do jogo da velha
            imprimirJogo();

            // identifica o jogador e computa a jogada com a funcao computarJogada()
            identificarJogador();

            // verifica se ouve vitorioso
            verificaVitorioso();
        } while(vitoria != 1 && vitoria != 2 && jogadas < 9);

        // montagem visual do jogo da velha
        imprimirJogo();

        // printando resultado
        printResultado();

        // pergunta ao jogar se ele queer jogar dnv
        jogarNovamente();
    } while(opcao);

    printf("\nSaindo do jogo...");

    return (0);
}