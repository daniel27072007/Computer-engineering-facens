#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, num2, num3;
	float nun1, nun2, nun3;
	char let1, let2, let3;
	
	printf("Plano de Saude\n");
	printf("Digite sua idade:");

	scanf("%i", &num1);
	fflush(stdin);

	if (num1 <= 0){
		printf("Idade invalida");
		return 0;
	}
	else if (num1 > 0 && num1 <= 17){
		nun1 = 100;
	}
	else if (num1 > 17 && num1 <= 40){
		nun1 = 150;
	}
	else if (num1 > 40 && num1 <= 65){
		nun1 = 250;
	}
	else if (num1 > 65){
		nun1 = 400;
	}
	
	
	printf("\nDigite sua idade: %i\n", num1);
	if (num1 >= 60){
		nun2 = nun1 + 50;
		printf("Valor do Plano R$%.2f", nun2);
	}
	else{
		printf("Valor do Plano R$%.2f", nun1);
	}
	return 0;
}