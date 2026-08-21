#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
	
	char opt = 's';
	int num1, num2 = 0;
	float nun1, nun2, nun3, nun4 = 0; //nun2 = numero maior e nun3 = total e nun4 = contagem
	
	do{
		printf("[1] - Soma");
		printf("\n[2] - Subtracao");
		printf("\n[3] - Multiplicacao");
		printf("\n[4] - Divisao");
		printf("\n[5] - sair\n\n");
		
		scanf("%i", &num1);
		fflush(stdin);
		
		if(num1 == 5){
			return 0;
		}
		
		printf("digite o primeiro numero:");
		scanf("%f", &nun1);
		fflush(stdin);
		
		printf("digite o segundo numero:");
		scanf("%f", &nun2);
		fflush(stdin);
		
		switch(num1){
			case 1:
				printf("%.2f + %.2f = %.2f\n\n", nun1, nun2, nun1+nun2);
				break;
			case 2: 
				printf("%.2f - %.2f = %.2f\n\n", nun1, nun2, nun1-nun2);
				break;
			case 3: 
				printf("%.2f x %.2f = %.2f\n\n", nun1, nun2, nun1*nun2);
				break;
			case 4:
				printf("%.2f + %.2f = %.2f\n\n", nun1, nun2, nun1/nun2);
				break;
			default:
				printf("sinal de operacao invalido");
				break;
		}
	}while(num1 != 5);
	
	return 0;
}