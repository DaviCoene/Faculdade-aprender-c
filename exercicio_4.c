//Exercício 2 (XP 10): F.U.P que imprime uma tabela com a tabuada de 1 a 9.
#include <stdio.h> 

int main(void){

	for (int i = 1; i < 10; i++){
		for (int j = 1; j < 10; j++ ) {
			printf("valor  [%d] X [%d] = %d\n", i, j, i*j); // exemplo: 1 X 1 = 1
		}
	}
}