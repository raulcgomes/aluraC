#include <stdio.h>

int main(){
	int op;
	double a, b, r;

	printf("Digite a operacao:\n");
	printf("1 - somar | 2 - subtrair | 3 - dividir | 4 - multiplicar\n");
	scanf("%d", &op);

	printf("Digite o primeiro valor:\n");
	scanf("%lf", &a);

	printf("Digite o segundo valor:\n");
	scanf("%lf", &b);

	if(op == 1){
		printf("%.2f + %.2f = %.2f\n", a, b, a + b);
	} else if (op == 2){
		printf("%.2f - %.2f = %.2f\n", a, b, a - b);
	} else if (op == 3){
		printf("%.2f / %.2f = %.2f\n", a, b, a / b);
	} else {
		printf("%.2f * %.2f = %.2f\n", a, b, a * b);
	}
}