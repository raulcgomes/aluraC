#include <stdio.h>

int main(){
	int x, y, result;

	printf("Digite o primeiro numero: ");
	scanf("%d", &x);

	printf("Digite o segundo numero: ");
	scanf("%d", &y);

	result = x * y;

	printf("\nA multiplicacao entre os valores eh = %d\n", result);

}