#include<stdio.h>

int fibonacci(int n){
	int v1=0;
	int v2=1;
	int v3;
	int i;
	printf("\n%d %d", v1 , v2);
	for (i = 2; i < n; i++){
		v3 = v1 + v2;
		printf(" %d", v3);
		v1 = v2;
		v2 = v3;
	}
}
int main(void){
	int n;
	printf("Digite quantos numeros da sequencia fibonnaci voce quer");
	scanf("%d", &n);
	printf(fibonacci(n));
}