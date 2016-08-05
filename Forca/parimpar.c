#include <stdio.h>

int parimpar(int n){
	if(n % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
}

int main() {

	int num;
	int result;
	scanf("%d", &num);

	result = parimpar(num);

	printf("%d\n", result);
}