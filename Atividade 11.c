#include <stdio.h>
#include <stdlib.h>
int main() {
    int rodada = 1;
    int jogador = 0, computador = 0;
    int dado1, dado2, soma;

    srand(time(NULL));

    printf("Bem-vindo ao jogo de dois dados contra o computador!\n\n");

    while (jogador <= 20 && computador <= 20) {
        printf("Rodada %d:\n", rodada);

       
        dado1 = rand() % 6 + 1;
        dado2 = rand() % 6 + 1;
        soma = dado1 + dado2;
        printf("Você jogou %d e %d, totalizando %d pontos.\n", dado1, dado2, soma);
        jogador += soma;

        
        dado1 = rand() % 6 + 1;
        dado2 = rand() % 6 + 1;
        soma = dado1 + dado2;
        printf("O computador jogou %d e %d, totalizando %d pontos.\n", dado1, dado2, soma);
        computador += soma;

        
        if (jogador > computador) {
            printf("Você avançou para a próxima rodada!\n\n");
            rodada++;
        } else {
            printf("Você perdeu a rodada!\n\n");
        }
    }

   
    if (jogador > 20) {
        printf("Parabéns, você ganhou o jogo!\n");
    } else {
        printf("Que pena, você perdeu o jogo!\n");
    }

    return 0;
}
