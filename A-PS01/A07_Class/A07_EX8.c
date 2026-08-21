#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
	
	char opt = 's';
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0; /* valores;*/ float vot1 = 0, vot2 = 0, vot3 = 0, bra = 0, nul = 0, total, por;
	float nun1, nun2, nun3, nun4 = 0;
	
	printf("Escolha de Voto\n");
	
	do{
		printf("\n---------------%i----------------",num4);
		printf("\n[0] para encerrar os resultados");
		printf("\n[1] - Jose");
		printf("\n[2] - Maria");
		printf("\n[3] - Joao");
		printf("\n[4] - Voto em Branco");
		printf("\n[5] - Voto Nulo\n\n");
		scanf("%i", &num1);
		fflush(stdin);
		
		switch(num1){
			case 1:
				vot1 += 1;
				break;
			case 2:
				vot2 += 1;
				break;
			case 3:
				vot3 += 1;
				break;
			case 4:
				bra += 1;
				break;
			case 5:
				nul += 1;
				break;
			case 0:
				break;
			default:
				printf("\n*opcao invalida*");
		}
		num4 += 1;
	}while(num1 != 0);
	
	total = vot1 + vot2 + vot3 + bra;
	printf("\nvotos totais: %.0f", total);
	printf("\nvotos para Jose: %.0f", vot1);
	printf("\nvotos para Maria: %.0f", vot2);
	printf("\nvotos para Joao: %.0f", vot3);
	printf("\nvotos em branco: %.0f", bra);
	printf("\nvotos nulos: %.0f", nul);
	
	if(vot1 > vot2 && vot1 > vot3){
		por = (((vot1 + bra) * 100)) / total;
		printf("\n\nJose ganhou com %.0f%% dos votos", por);
	}
	if(vot2 > vot1 && vot2 > vot3){
		por = (((vot2 + bra) * 100)) / total;
		printf("\n\nMaria ganhou com %.0f%% dos votos", por);
	}
	if(vot3 > vot1 && vot3 > vot2){
		por = (((vot3 + bra) * 100)) / total;
		printf("\n\nJoao ganhou com %.0f%% dos votos", por);
	}
	if(vot3 == vot1 && vot1 == vot2){
		printf("\n\nDeu empate");
	}
	
	return 0;
}