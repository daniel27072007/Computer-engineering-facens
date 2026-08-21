#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, num2, num3;
	float nun1, nun2, nun3;
	char let1, let2, let3;
	
	nun1 = 0;
	
	printf("Lanchonete\n");
	printf("Escolha uma opcao\n\n");
	printf("1 - Hamburguer (R$10)\n");
	printf("2 - Pizza (R$15)\n");
	printf("3 - Refrigerante (R$5)\n\n");
	
	scanf("%i", &num1);
	fflush(stdin);
	
	switch(num1){
		case 1: printf("Voce escolheu hamburguer\n\n");
			nun1 = 10;
			break;
		case 2: printf("Voce escolheu pizza\n\n");
			nun1 = 15;
			break;
		case 3: printf("Voce escolheu refrigerante\n\n");
			nun1 = 5;
			break;
		default: printf("Opcao Invalida\n\n");
			break;
	}
	
	if (nun1 != 0){
		printf("Quantidade Desejada:");
		scanf("%i", &num2);
		fflush(stdin);
	}
	
	if (num2 <= 0 && nun1 != 0){
		printf("Opcao Invalida");
	}
	else if (nun1 * num2 > 30 && nun1 != 0){
		printf("Valor a pagar = %.2f", nun1 * num2 * 0.9);	
	}
	else if (nun1 != 0){
		printf("Valor a pagar = %.2f", nun1 * num2);
	}

	return 0;
}