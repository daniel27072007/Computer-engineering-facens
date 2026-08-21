#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
	
	char opt = 's';
	int num1, num2 = 0;
	float nun1, nun2, nun3, nun4 = 0; //nun2 = numero maior e nun3 = total e nun4 = contagem
	
	do{
		printf("[1] - digitar numero");
		printf("\n[2] - sair\n\n");
		
		scanf("%i", &num1);
		fflush(stdin);
	
		if(num1 == 2){
			break;
		}
		if (num1 == 1){
			printf("\ndigite um numero:");
			scanf("%f", &nun1);
			fflush(stdin);
			
			if(nun1 > nun2){
				nun2 = nun1;
			}
			
			nun3 +=nun1;
			nun4 += 1;
		}
		else{
			printf("***opcao invalida***\n\n");
		}
	}while (num1 != 2);
	
	printf("maior numero dos digitados foi %.2f\n\n", nun2);
	printf("a media aritimetrica dos numeros digitados foi %.2f", nun3/nun4);
	
	return 0;
}