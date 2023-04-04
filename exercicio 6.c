#include<stdio.h>
#include<stdlib.h>

int main(void){
	int n;
	printf("Digite um numero ");
	scanf("%d", &n);
	printf("O fatorial e :%d", fatorial(n));
}
int fatorial(int n){
	if (n == 0){
		return(1);
	}
	return(n*fatorial(n-1));
	
}