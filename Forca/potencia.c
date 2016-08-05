#include <stdio.h>

int potencia(int a, int b) {
	int result = 1;
	for(int i = 0; i < b; i++) {
	  result = result * a;
	}

  return result;
}

int main() {
	printf("%d\n", potencia(2, 2));
}