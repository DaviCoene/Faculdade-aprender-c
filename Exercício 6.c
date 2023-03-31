#include <stdio.h>

int main(void){
	int n;
	int i;
	int muy = 1;
	printf("Qual fatorial deseja achar?: ");
	scanf("%d", &n);
	
	while(n != 0) {
		muy = n * muy;
		n = n - 1;
	}
	printf("%d", muy);
	}
