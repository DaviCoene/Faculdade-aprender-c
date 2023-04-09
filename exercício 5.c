#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h>    
#include <time.h>


int main()  
{  
	// declare the local variables  
	int i, num;  
	int j = 0;
	int myNum;
	int c = 0;
	
	srand(time(NULL));  
	for (i = 0; i < 10; i++)
	{
		num = rand() % 100 + 1;  
	}
	
	
	
	
	while (j==0) {
		printf("Digite um numero: ");
		scanf("%d", &myNum);
		
		if (myNum == num)
		{
			j = 1;
		}
		
		if (myNum < num){
			printf("Maior \n \n");
		}
		
		if (myNum > num){
			printf("Menor! \n \n");
		}
		
		
		c = c + 1;
		}
		
	printf("Acertou em %d tentativas" , c);
	
} 