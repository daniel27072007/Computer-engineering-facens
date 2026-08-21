#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float nun1, nun2, nun3, nun4;
	int num1, nun2;
	
	//Ex1
	printf("EX1");
	printf("\nMedia ponderada");
	printf("\nDigite as suas tres notas:");
	scanf("%f %f %f", &nun1, &nun2, &nun3);
	fflush(stdin);
	
	nun4 = (nun1*2 + nun2*3 + nun3*5) / 10;
	
	if (nun4 >= 7){
		printf("\n%.2f --> aprovado!", nun4);
	}
	else if (nun4 >= 5 && nun4 < 7){
		printf("\n%.2f --> recuperacao", nun4);
	}
	else if (nun4 < 5){
		printf("\n%.2f --> recuperado", nun4);
	}
	
	//Ex2
	printf("\n\nEX2");
	printf("\nIdade");
	printf("\nDigite sua idade:");
	scanf("%i", &num1);
	fflush(stdin);
	
	if (num1 > 0 && num1 <= 12){
		printf("\nCrianca");
	}
	else if (num1 > 12 && num1 <= 17){
		printf("\nAdolecente");
	}
	else if (num1 > 17 && num1 <= 59){
		printf("\nAdulto");
	}
	else if (num1 > 59){
		printf("\nIdoso");
	}
	
	//Ex3
	printf("\n\nEX3");
	printf("\nDesconto");
	printf("\nDigite o preco:");
	scanf("%f", &nun1);
	fflush(stdin);
	
	if (nun1 <= 100){
		printf("\n%.2f ---> %.2f", nun1, nun1*0.95);
	}
	else if (nun1 > 100 && nun1 <= 500){
		printf("\n%.2f ---> %.2f", nun1, nun1*0.9);
	}
	else if (nun1 > 500){
		printf("\n%.2f ---> %.2f", nun1, nun1*0.85);
	}
	
	//Ex4
	printf("\n\nEX4");
	printf("\nMultiplo 5 e 3");
	printf("\nDigite o numero:");
	scanf("%i", &num1);
	fflush(stdin);
	
	if (num1 % 5 == 0 && num1 % 3 != 0){
		printf("%i --> multiplo apenas de 5", num1);
	}
	else if (num1 % 5 != 0 && num1 % 3 == 0){
		printf("%i --> multiplo apenas de 3", num1);
	}
	else if (num1 % 5 == 0 && num1 % 3 == 0){
		printf("%i --> multiplo de 5 e 3", num1);
	}
	else if (num1 % 5 != 0 && num1 % 3 != 0){
		printf("%i --> nao e multiplo de 5 ou 3", num1);
	}
	
	//Ex5
	printf("\n\nEX5");
	printf("\nDia da semana");
	printf("\nDigite o numero:");
	scanf("%i", &num1);
	fflush(stdin);
	
	switch(num1){
		case 1: printf("1 --> domingo");
			break;
		case 2: printf("2 --> segunda");
			break;
		case 3: printf("3 --> terca");
			break;
		case 4: printf("4 --> quarta");
			break;
		case 5: printf("5 --> quinta");
			break;
		case 6: printf("6 --> sexta");
			break;
		case 7: printf("7 --> sabado");
			break;
		default: printf("dia invalido");
	}
		
	//Ex6
	printf("\n\nEX6");
	printf("\nApples bought");
	printf("\nDigite o numero:");
	scanf("%f", &nun1);
	fflush(stdin);
	
	if (nun1 < 12){
		printf("%.2f x 1.30R$ = %.2fR$", nun1, nun1*1.30);
	}
	else if (nun1 >= 12){
		printf("%.2fR$", nun1);
	}
	
	return 0;
}