#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define TAMANHO_MAXIMO_SEQUENCIA 100

void mostrar_sequencia(int sequencia[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", sequencia[i]);
        fflush(stdout); // Forçar a saída do texto para o terminal
        usleep(500000); // Esperar meio segundo antes de mostrar o próximo número
    }
    printf("\n");
}

int main() {
    int sequencia[TAMANHO_MAXIMO_SEQUENCIA];
    int tamanho_sequencia = 0;
    int jogador[TAMANHO_MAXIMO_SEQUENCIA];
    int tamanho_jogador = 0;
    srand(time(NULL));

    printf("Bem-vindo ao Genius!\n");

    while (1) {
        // Adicionar um novo número à sequência
        sequencia[tamanho_sequencia] = rand() % 4 + 1;
        tamanho_sequencia++;

        // Mostrar a sequência para o jogador
        printf("Sequência: ");
        mostrar_sequencia(sequencia, tamanho_sequencia);

        // Ler a jogada do jogador
        tamanho_jogador = 0;
        printf("Digite a sequência (um número de cada vez):\n");
        while (tamanho_jogador < tamanho_sequencia) {
            int jogada;
            scanf("%d", &jogada);
            if (jogada < 1 || jogada > 4) {
                printf("Jogada inválida. Tente novamente.\n");
            } else {
                jogador[tamanho_jogador] = jogada;
                tamanho_jogador++;
            }
        }

        // Verificar se a jogada está correta
        int jogada_correta = 1;
        for (int i = 0; i < tamanho_sequencia; i++) {
            if (jogador[i] != sequencia[i]) {
                jogada_correta = 0;
                break;
            }
        }

        if (jogada_correta) {
            printf("Jogada correta!\n");
        } else {
            printf("Jogada incorreta! Fim de jogo.\n");
            break;
        }

        // Se o jogador acertou a sequência máxima, ele venceu o jogo
        if (tamanho_jogador == TAMANHO_MAXIMO_SEQUENCIA) {
            printf("Parabéns, você venceu o jogo!\n");
            break;
        }
    }

    return 0;
}