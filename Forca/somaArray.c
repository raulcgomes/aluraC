#include <stdio.h>

int soma(int numeros[10]) {
	int result = 0;
	for(int i = 0; i < 10; i++) {
		result = result + numeros[i];
	} return result;
}

int main () {
	int n[10];
	n[1] = 1;
	n[1] = 2;
	n[2] = 4;
	n[3] = 8;
	n[4] = 16;
	n[5] = 32;
	n[6] = 64;
	n[7] = 128;
	n[8] = 256;
	n[9] = 512;

	printf("%d\n", soma(n));
}