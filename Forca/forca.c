#include <stdio.h>
#include <string.h>

int main() {
	char secreatWord[20];
	sprintf(secreatWord, "teste");

	int acertou = 0;
	int enforcou = 1;

	do {
		
		char chuteUser;
		scanf(" %c", &chuteUser);

		for(int i = 0; i < strlen(secreatWord); i++) {
			if(secreatWord[i] == chuteUser){
				printf("A posicao %d tem esse caractere\n", i);
			}
		}

	} while(!acertou && !enforcou);
}