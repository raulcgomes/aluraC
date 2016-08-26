#include <stdio.h>
#include <string.h>

//Variaveis Globais:
char secreatWord[20];
char chutesPossiveis[26];
int tentativas = 0;

void abertura() {
	printf("*****************\n");
	printf("* Jogo da Forca *\n");
	printf("*****************\n\n");
}

void chuta() {
	char chuteUser;
	scanf(" %c", &chuteUser);

	chutesPossiveis[tentativas] = chuteUser;
	tentativas++;
}

int jachutou(char letra) {
	int achou = 0;

	for(int j = 0; j < tentativas; j++) {
		if(chutesPossiveis[j] == letra) {
			achou = 1;
			break;
		}
	}

	return achou;
}

void desenhaForca() {
	for(int i = 0; i < strlen(secreatWord); i++) {
		
		int achou = jachutou(secreatWord[i]);

		if(achou){
			printf("%c ", secreatWord[i]);
		} else {
			printf("_ ");
		}
	}

	printf("\n");
}

void escolhePalavra() {
	sprintf(secreatWord, "teste");
}

int main() {
	int acertou = 0;
	int enforcou = 0;

	escolhePalavra();
	abertura();

	do {

		desenhaForca();
		chuta();

	} while(!acertou && !enforcou);
}