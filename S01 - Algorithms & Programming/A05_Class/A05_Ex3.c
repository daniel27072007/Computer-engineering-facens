#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, num2, num3;
	float nun1, nun2, nun3;
	char let1, let2, let3;
	
	printf("Valor do pagamento:");
	scanf("%f", &nun1);
	fflush(stdin);
	
	
	printf("\n\nForma de pagamento\n");
	printf("Escolha uma opcao\n\n");
	printf("1 - Dinheiro (10%% desconto)\n");
	printf("2 - Cartao a vista (5%% desconto)\n");
	printf("3 - Cartao parcelado (sem desconto))\n\n");
	
	scanf("%i", &num1);
	fflush(stdin);
	
	switch(num1){
		case 1: nun2 = nun1 * 0.9;
			break;
		case 2: nun2 = nun1 * 0.95;
			break;
		case 3: nun2 = nun1;
			break;
		default: printf("Opcao Invalida");
			return 0;
	}
	
	if (nun1 > 100){
		printf("\n!Compra Alta! valor final = %.2f", nun2);
	}
	else{
		printf("\nvalor final = %.2f", nun2);
	}
	
	return 0;
}