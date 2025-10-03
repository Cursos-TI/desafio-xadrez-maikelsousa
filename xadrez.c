#include <stdio.h>
#include  <stdlib.h>

int main (){
	char peca[20];
	char direcao[20];
	int casas;
	int i = 0;
	
	printf("Digite qual pe�a voce quer mover\n");
	scanf("%s",peca);
	printf("Para qual lado deseja mover?\n");
	scanf("%s",direcao);
	printf("Quantas casas?\n");
	scanf("%d", &casas);
	
	if (strcmp(peca, "bispo") == 0) {
		printf("Movendo %s, na diagonal %s, %d casas\n", peca, direcao, casas);
	}
	else if (strcmp(peca, "torre") == 0) {
		printf("Movendo %s, na horizontal %s, %d casas\n", peca, direcao, casas);
	}
	else if (strcmp(peca, "cavalo") == 0) {
		printf("Movendo %s, na vertical %s, %d casas\n", peca, direcao, casas);
	}
	else if (strcmp(peca, "peao") == 0) {
		printf("Movendo %s, na diagonal %s, %d casas\n", peca, direcao, casas);
		casas--;
	}
	else if (strcmp(peca, "rainha") == 0) {
		printf("Movendo %s, em qualquer direção %s, %d casas\n", peca, direcao, casas);
	}
	else if (strcmp(peca, "rei") == 0) {
		printf("Movendo %s, uma casa para %s\n", peca, direcao);
	}

	
	return 0;
