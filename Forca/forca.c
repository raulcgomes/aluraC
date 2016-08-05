#include <stdio.h>
#include <string.h>

void abertura() {
	printf("*****************\n");
	printf("* Jogo da Forca *\n");
	printf("*****************\n\n");
}

void chuta(char chutesPossiveis[26], int tentativas) {
	char chuteUser;
	scanf(" %c", &chuteUser);

	chutesPossiveis[tentativas] = chuteUser;
	//tentativas++;
}

int main() {
	char secreatWord[20];
	sprintf(secreatWord, "teste");

	int acertou = 0;
	int enforcou = 0;

	char chutesPossiveis[26];
	int tentativas = 0;

	abertura();

	do {
		
		//imprime palavra secreta
		for(int i = 0; i < strlen(secreatWord); i++) {
			
			int achou = 0;
			
			//a letra ja foi chutada
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

		chuta(chutesPossiveis, tentativas);
		tentativas++;

	} while(!acertou && !enforcou);
}