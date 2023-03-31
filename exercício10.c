#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;		//variavel jogador
	int b;		//variavel computador
	int pc = 0;		//vitorias pc
	int jo = 0;		//vitorias jogador
	int rodada;     //quantidade de rodadas	
	
printf("Este eh um jogo de joquei pow!\n");

while (pc < 2 && jo < 2){
	printf("[0]pedra , [1]papel , [2]tesoura, escolha um numero: \n");
	scanf("%d", &a);
	srand(time(NULL));
	b = rand()% 3;
	printf("----------------------------------\n");
	if (b==a){
		printf("Empate!\n");
		rodada++;
}
	
	
	if (a == 0){
		
		if (b == 1){
			printf("Você perdeu o computador escolheu papel!\n");
			pc++;
			rodada++;
		}
		
		if (b == 2){
			printf("Você ganhou o computador escolheu tesoura!\n");
			jo++;
			rodada++;
		}	
	}
	
	if (a == 1){
		
		if (b == 2){
			printf("Voce perdeu o computador escolheu tesoura!\n");
			pc++;
			rodada++;
		}
		
		if (b == 0){
			printf("Voce ganhou o computador escolheu pedra!\n");
			jo++;
			rodada++;
			
		}	
	}	
	
	if (a == 2){
		
		if (b == 0){
			printf("Voce perdeu o computador escolheu pedra!\n");
			pc++;
			rodada++;
			
		}
		
		if (b == 1){
			printf("Voce ganhou o computador escolheu papel!\n");
			jo++;
			rodada++;
		}	
	}
	printf("----------------------------------\n");
	printf("Vitorias do jogador = %d\n", jo);
	printf("Vitorias do Computador = %d\n", pc);
	printf("Quantidade de rodadas = %d\n", rodada);
	printf("----------------------------------\n");
}
}