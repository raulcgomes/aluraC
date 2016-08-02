#include <stdio.h>

int main(){
	int n;
	int mult = 10;

	printf("Escolha um numero para checar a taboada: ");
	scanf("%d", &n);
	printf("********************\n");
	for(int i = 1; i <= mult; i++){
		printf("%d * %d = %d\n", n, i, n * i);
	}
	printf("********************\n");
}