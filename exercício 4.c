#include<stdio.h>
int main(void){
	int a, b, c;
	printf("Digite o valor do primeiro lado");
	scanf("%d", &a);
	printf("Digite o valor do segundo lado");
	scanf("%d", &b);
	printf("Digite o valor do terceiro lado");
	scanf("%d", &c);
	
	if ((a == b) && (b==c)){
		printf("eh um triangulo equilahtero");

	}
	
	if ((a == b) && (c != b)){
		printf("eh um triangulo isoceles");
	} 
	if ((b == c) && (a != b)){
		printf("eh um tringulo isoceles");
	}
	if ((a == c) && (b != a)){
		printf("eh um tringulo isoceles");
		
	}

	
	
	if((a != c) && (b != c) && (a != b))
	{
		printf("eh um triagulo escaleno");
	}
}
