// Exercício 1 (XP 7): Faça um programa em C (F.U.P) que pergunta um valor em metros e imprime o
// correspondente em decímetros, centímetros e milímetros.

#include <stdio.h> // para ler e mostrar da tela

int main(void) {
	float valor_metros;
	float valor_deci;
	float valor_cent;
	float valor_mili;
	
	printf("Digite o valor em metros:\n");
	scanf("%f", &valor_metros);
	
	// seu codigo continua aqui...
	// 1 m = 10 dm
	// 1 m = 100 cm
	// 1m = 1000 mm
	valor_deci = valor_metros * 10;
	valor_cent = valor_metros * 100;
	valor_mili = valor_metros * 1000;
	
	printf("Valor em Decimetros: %f \n", valor_deci);
	printf("Valor em centimentro: %f \n", valor_cent);
	printf("valor em Milimentros: %f \n", valor_mili);
	return 0;
}