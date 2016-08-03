#include <stdio.h>
#include <string.h>

int main() {
	char secreatWord[20];
	sprintf(secreatWord, "Teste");

	int acertou = 0;
	int enforcou = 0;

	char chutesPossiveis[26];
	int tentativas = 0;

	do {
		
		for(int i = 0; i < strlen(secreatWord); i++) {
			
			int achou = 0;
			
			for(int j = 0; j < tentativas; j++) {
				if(chutesPossiveis[j] == secreatWord[i]) {
					achou = 1;
					break;
				}
			}

			if(achou){
				printf("%c ", secreatWord[i]);
			} else {
				printf("_ ");
			}
		}

		printf("\n");

		char chuteUser;
		scanf(" %c", &chuteUser);

		chutesPossiveis[tentativas] = chuteUser;
		tentativas++;

	} while(!acertou && !enforcou);
}