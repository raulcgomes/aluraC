#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

//imprime o cabecaho do nosso jogo
printf("    ___       ___       ___       ___   \n");
printf("   /\\  \\     /\\  \\     /\\  \\     /\\  \\  \n");
printf("  _\\:\\  \\   /::\\  \\   /::\\  \\   /::\\  \\ \n");
printf(" /\\/::\\__\\ /:/\\:\\__\\ /:/\\:\\__\\ /:/\\:\\__\\ \n");
printf(" \\::/\\/__/ \\:\\/:/  / \\:\\:\\/__/ \\:\\/:/  / \n");
printf("  \\/__/     \\::/  /   \\::/  /   \\::/  / \n");
printf("             \\/__/     \\/__/     \\/__/ \n"); 
printf("               ADIVINHACAO            \n\n");

//declara variavel
	srand(time(0));
	int numerosecreto = rand() % 100;
	int chuteuser;
	int tentativas = 1;
	double pontos = 1000;
	int acertou = 0;
	int numeroTentativas;
	
	int nivel;
	printf("Qual nivel de dificuldade?\n");
	printf("1 - Facil | 2 - Normal | 3 - Dificil\n\n");
	printf("Digite o nivel: ");
	scanf("%d", &nivel);
	printf("\n");

	switch(nivel){
		case 1:
			numeroTentativas = 20;
			break;
		case 2:
			numeroTentativas = 15;
			break;
		default:
			numeroTentativas = 5;
			break;
	}

	for(int i = 1; i <= numeroTentativas; i++){
		printf("Tentativa %d\n", tentativas);
		printf("Qual seu chute? \n");
		scanf("%d", &chuteuser);
		printf("Seu chute foi %d\n" ,chuteuser);

		if(chuteuser < 0){
			printf("***NAO CHUTE NUMEROS NEGATIVOS!***\n");
			continue;
		}

		acertou = (chuteuser == numerosecreto);
		int maior = (chuteuser > numerosecreto);

		if(acertou) {
			break;
		} 
		else if (maior) {
			printf("Seu chute foi MAIOR que o numero secreto.\n");
		} else {
			printf("Seu chute foi MENOR que o numero secreto.\n");
		}

		tentativas++;

		double pontosPerdidos = abs(chuteuser - numerosecreto) / (double)2;
		pontos = pontos - pontosPerdidos;
	}

	printf("\nFim de jogo!\n\n");

	if(acertou){
		printf("``````````````````````000000000 							\n");
		printf("````````````````````00``````````00							\n");
		printf("``````00000```````00``````````````00						\n");
		printf("`````0`````0````00`````00````00`````00						\n");
		printf("`````0`````0```00``````00````00```````00					\n");
		printf("`````0````0``00````````00````00````````00					\n");
		printf("``````0```0```0`````````````````````````00	PARABENS		\n");
		printf("````000000000000````````````````````````00	  VOCE			\n");
		printf("```0````````````0`00`````````````00`````00	 VENCEU			\n");
		printf("``00````````````0``00````````````00`````00					\n");
		printf("`00```00000000000````00````````00```````00					\n");
		printf("`0```````````````0`````0000000`````````00					\n");
		printf("`00``````````````0````````````````````00	 JOGUE			\n");
		printf("``0```000000000000```````````````````00	       NOVAMENTE 	\n");
		printf("``00```````````0``00````````````````00 						\n");
		printf("```000000000000`````00````````````00 						\n");
		printf("```````````````````````00000000000 							\n");

		printf("Acertou na tentativa %d\n", tentativas);
		printf("%.1f pontos ganhos!.\n", pontos);
	} else {
		printf("	.o oOOOOOOOo                                        OOOo        	\n");
		printf("    Ob.OOOOOOOo  OOOo.      oOOo.                      .adOOOOOOO  	 	\n");
		printf("    OboO''''''''''''.OOo. .oOOOOOo.    OOOo.oOOOOOo..''''''''''OO  		\n");
		printf("    OOP.oOOOOOOOOOOO ''POOOOOOOOOOOo.   `OOOOOOOOOP,OOOOOOOOOOOB'  		\n");
		printf("    `O'OOOO'     `OOOOo'OOOOOOOOOOO` .adOOOOOOOOO'oOOO'    `OOOOo 		\n");
		printf("    .OOOO'             `OOOOOOOOOOOOOOOOOOOOOOOOOO'            `OO 		\n");
		printf("    OOOOO      VOCE      ''OOOOOOOOOOOOOOOO'`       PERDEU     oOO 		\n");
		printf("   oOOOOOba.                  .adOOOOOOOOOOba               .adOOOOo. 	\n");
		printf("  oOOOOOOOOOOOOOba.    .adOOOOOOOOOO@^OOOOOOOba.     .adOOOOOOOOOOOO 	\n");
		printf(" OOOOOOOOOOOOOOOOO.OOOOOOOOOOOOOO``  '`OOOOOOOOOOOOO.OOOOOOOOOOOOOO 	\n");
		printf(" ``OOOO``    ``YOoOOOOMOIONODOO`  .   ``OOROAOPOEOOOoOY```OOO`` 	    \n");
		printf("    Y           `OOOOOOOOOOOOOO: .oOOo. :OOOOOOOOOOO?`         :` 		\n");
		printf("    :            .oOOOOOOOOOOOo.OOOOOO.oOOOOOOOOOOOO?         . 		\n");
		printf("    .            oOOP``!OOOOOOOOoOOOOOOO?oOOOOO?OOOO``OOo 				\n");
		printf("               `#o  OOOO``#OOOO#``#OOOOO``OOOOOO``OOO`: 				\n");
		printf("                      `$`  `OOOO' `O``Y ' `OOOO`  o             . 		\n");
		printf("    .                  .     OP``          : o     . 					\n");

	}
	
}