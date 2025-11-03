
#include <stdio.h>
#include  <stdlib.h>


int main (){
int escolha, i=0;
printf("Escolha a peca para mover:\n1 - Torre\n2 - Bispo\n3 - Rainha\n");
scanf("%d", &escolha);

switch (escolha) {
    case 1: // Torre
        for (i = 0; i < 5; i++) {
            printf("Torre: Direita\n");
        }
        break;
    case 2: // Bispo
        i = 0;
        while (i < 5) {
            printf("Bispo: Cima, Direita\n");
            i++;
        }
        break;
    case 3: // Rainha
        i = 0;
        do {
            printf("Rainha: Esquerda\n");
            i++;
        } while (i < 8);
        break;
    default:
        printf("Opcao invalida.\n");
}

return 0;
}
