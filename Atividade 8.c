#include <stdio.h>

int main() {
    int n, i;
    float x, y = 0.0;
    float coef[11]; 

    printf("Entre com a ordem da função (até 10): ");
    scanf("%d", &n);

    printf("Entre com os coeficientes da função, do termo de maior grau para o termo de menor grau:\n");
    for (i = n; i >= 0; i--) {
        scanf("%f", &coef[i]);
    }

    printf("Entre com o valor de x: ");
    scanf("%f", &x);

    for (i = n; i >= 0; i--) {
        y = y * x + coef[i];
    }

    printf("y = %.2f\n", y);

    return 0;
}