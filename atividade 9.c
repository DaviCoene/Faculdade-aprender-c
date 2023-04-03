#include<stdio.h>

int main(void){
	char nome[50];
	char endereco[100];
	int numero;
	int idade;
	printf("Qual eh o seu nome?: ");
	gets(nome);
	printf("Onde voce mora?:");
	gets(endereco);
	printf("Qual seu numero?: ");
	scanf("%d", &numero);
	printf("Tem quantos anos? ");
	scanf("%d,", &idade);
	printf("Seu nome eh %s , voce tem %d anos, mora na rua %s, e seu numero eh %d", nome, idade, endereco, idade);
}