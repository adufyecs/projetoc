#include <stdio.h>

#define TAMANHO 10

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

void aplicarHabilidade(int tabuleiro[TAMANHO][TAMANHO], int x, int y, char tipo) {
    if (tipo == 'C') { // Cruz
        for (int i = -2; i <= 2; i++) {
            if (x + i >= 0 && x + i < TAMANHO) tabuleiro[x + i][y] = 5;
            if (y + i >= 0 && y + i < TAMANHO) tabuleiro[x][y + i] = 5;
        }
    } else if (tipo == 'O') { // Octaedro
        for (int i = -2; i <= 2; i++) {
            for (int j = -2; j <= 2; j++) {
                if ((i + j >= -2 && i + j <= 2) && (i - j >= -2 && i - j <= 2)) {
                    if (x + i >= 0 && x + i < TAMANHO && y + j >= 0 && y + j < TAMANHO) {
                        tabuleiro[x + i][y + j] = 5;
                    }
                }
            }
        }
    } else if (tipo == 'N') { // Cone
        for (int i = 0; i < 3; i++) {
            for (int j = -i; j <= i; j++) {
                if (x + i >= 0 && x + i < TAMANHO && y + j >= 0 && y + j < TAMANHO) {
                    tabuleiro[x + i][y + j] = 5;
                }
            }
        }
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 0) printf("0 "); // Água
            else if (tabuleiro[i][j] == 5) printf("1 "); // Habilidade
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    inicializarTabuleiro(tabuleiro);
    
    aplicarHabilidade(tabuleiro, 4, 4, 'C'); // Cruz no centro
    aplicarHabilidade(tabuleiro, 1, 1, 'N'); // Cone no canto
    aplicarHabilidade(tabuleiro, 7, 7, 'O'); // Octaedro na parte inferior
    
    exibirTabuleiro(tabuleiro);
    return 0;
}

