#include<stdio.h>
int main(void){
	int n;
	printf("Digite qual numero voce quer ");
	scanf("%d", &n);
	printf(" A funcao %d", fibonacci(n));
}
int fibonacci(int n){
	if (n == 0){
		return(1);
	}
	return(n*fibonacci(n - 1) + n*fibonacci(n - 2));
}
	
