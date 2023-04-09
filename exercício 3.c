#include <stdio.h>

int main() {

	int i;
	int j;
	int n_notas;  
	int soma = 0;
	int myNum;
	float media;
	
	printf("Numeros de notas: ");
	scanf("%d", &n_notas);
	
	int myNumbers[n_notas];
	
	
	for (i = 0; i < n_notas; i++) 
		{	
			printf("%da nota: ", i + 1);
			scanf("%d", &myNum);
			myNumbers[i] = myNum;
			soma = soma + myNum;
			media = soma / n_notas;
		}
	
	int max = myNumbers[0];
	int min = myNumbers[0];
	
	
	for (i = 0; i < n_notas; i++) 
		{
			if (myNumbers[i] > max )
			
			max = myNumbers[i];
		}
		
	
	if (myNumbers[i] < min )
		{
			min = myNumbers[i];
		}
	
	
	
	
	printf("A media e %.2f\n", media);
	printf("O maior numero e %d\n", max);
	printf("O menor numero e %d\n", min);
	
	return 0;
	
	}