#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanhoTabuleiro 4

void iniciarTabuleiro(int tabuleiro[][tamanhoTabuleiro]) {
    int i, j, num;
    for (i = 0; i < tamanhoTabuleiro; i++) {
        for (j = 0; j < tamanhoTabuleiro; j++) {
            num = (i * tamanhoTabuleiro) + j + 1;
            tabuleiro[i][j] = (num == tamanhoTabuleiro * tamanhoTabuleiro) ? 0 : num;
        }
    }
}

void embaralhar(int tabuleiro[][tamanhoTabuleiro]) {
    srand(time(NULL));
    int i, j, k, temp;
    for (k = 0; k < 1000; k++) {
        i = rand() % tamanhoTabuleiro;
        j = rand() % tamanhoTabuleiro;
        temp = tabuleiro[i][j];
        tabuleiro[i][j] = tabuleiro[tamanhoTabuleiro-1][tamanhoTabuleiro-1];
        tabuleiro[tamanhoTabuleiro-1][tamanhoTabuleiro-1] = temp;
    }
}

void printTabuleiro(int tabuleiro[][tamanhoTabuleiro]) {
    int i, j;
    for (i = 0; i < tamanhoTabuleiro; i++) {
        for (j = 0; j < tamanhoTabuleiro; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("   ");
            } else {
                printf("%2d ", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }
}

int can_move(int tabuleiro[][tamanhoTabuleiro], int linha, int coluna, int dLinha, int dColuna) {
    int novaLinha = linha + dLinha;
    int novaColuna = coluna + dColuna;
    return novaLinha >= 0 && novaLinha < tamanhoTabuleiro &&
           novaColuna >= 0 && novaColuna < tamanhoTabuleiro &&
           tabuleiro[novaLinha][novaColuna] == 0;
}

void move(int tabuleiro[][tamanhoTabuleiro], int linha, int coluna, int dLinha, int dColuna) {
    int novaLinha = linha + dLinha;
    int novaColuna = coluna + dColuna;
    int temp = tabuleiro[linha][coluna];
    tabuleiro[linha][coluna] = tabuleiro[novaLinha][novaColuna];
    tabuleiro[novaLinha][novaColuna] = temp;
}

int is_solved(int tabuleiro[][tamanhoTabuleiro]) {
    int i, j, k;
    k = 1;
    for (i = 0; i < tamanhoTabuleiro; i++) {
        for (j = 0; j < tamanhoTabuleiro; j++) {
            if (i == tamanhoTabuleiro-1 && j == tamanhoTabuleiro-1) {
                if (tabuleiro[i][j] != 0) {
                    return 0;
                }
            } else {
                if (tabuleiro[i][j] != k) {
                    return 0;
                }
                k++;
            }
        }
    }
    return 1;
}

int main() {
    int tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro];
    int linha, coluna, dLinha, dColuna;
    iniciarTabuleiro(tabuleiro);
    embaralhar(tabuleiro);
    while (1) {
        printf("\n");
        printTabuleiro(tabuleiro);
        printf("Digite a linha da peca que voce deseja mover (comecando em 0): ");
        scanf("%d", &linha);
        
        printf("Digite a coluna da peca que voce deseja mover (comecando em 0): ");
        scanf("%d", &coluna);
        
		printf("Digite a direção do movimento \n'-1'-> cima; \n'1'-> baixo; \n'-2'-> esquerda; \n'2'-> direita: ");
        scanf("%d", &dLinha);
        dColuna = dLinha / 2;
        dLinha = dLinha % 2;
        if (can_move(tabuleiro, linha, coluna, dLinha, dColuna)) {
            move(tabuleiro, linha, coluna, dLinha, dColuna);
            if (is_solved(tabuleiro)) {
                printf("\nParabéns, você resolveu o quebra-cabeça!\n");
                break;
            }
        } else {
            printf("\nMovimento inválido.\n");
        }
    }
    return 0;
}
