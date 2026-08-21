#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
	
	char opt = 's';
	int num1, num2 = 0;
	float nun1, nun2 = 0, nun3, nun4 = 0;
	
	do{
		printf("\n[1] - Depositar");
		printf("\n[2] - Retirar");
		printf("\n[3] - Sair - Mostrar Saldo\n\n");
		
		scanf("%i", &num1);
		fflush(stdin);
		
		if(num1 == 1){
			printf("\nQuanto quer depositar?\n");
			scanf("%f", &nun1);
			fflush(stdin);	
			nun2 += nun1;
		}
		else if(num1 == 2){
			printf("\nQuanto quer retirar?\n");
			scanf("%f", &nun1);
			fflush(stdin);	
			nun2 -= nun1;
		}
		else if(num1 != 3){
			printf("\n***opcao invalida***\n");
		}	
	}while(num1 != 3);
	
	printf("\n\nSaldo: %.2f", nun2);
	if(nun2 > 0){
		printf("\nConta Preferencial");
	}
	if(nun2 == 0){
		printf("\nConta Zerada");
	}
	if(nun2 < 0){
		printf("\nConta Estourada");
	}
	printf("\n\nSaindo...");
	
	return 0;
}