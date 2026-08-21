#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int num1, num2, num3;
	float nun1, nun2, nun3;
	
	//exercicio 1
	printf("ex_1\n");
	printf("+ ou -\n");
	printf("digite um numero:");
	scanf("%i", &num1);
	fflush(stdin);
	
	if (num1 >= 0){
		printf("num1 = positivo\n\n");
	}
	else{
		printf("num1 = negativo\n\n");
	}
	
	//exercicio 2
	printf("ex_2\n");
	printf("0 a 9\n");
	printf("digite um numero:");
	scanf("%i", &num1);
	fflush(stdin);
	
	if (0 <= num1 && num1 <= 9){
		printf("num1 = 0 a 9\n\n");
	}
	else{
		printf("num1 != 0 a 9\n\n");
	}
	
	//exercicio 3
	printf("ex_3\n");
	printf("divisao\n");
	printf("digite um numerador:");
	scanf("%i", &num1);
	printf("digite um divisor:");
	scanf("%i", &num2);
	fflush(stdin);
	
	
	if (num2 == 0){
		printf("nao existe divisao por zero\n\n");
	}
	else{
		num3 = num1 / num2;
		printf("%i\n\n", num3);
	}
	
	//exercicio 4
	printf("ex_4\n");
	printf("Media Final\n");
	printf("digite P1:");
	scanf("%i", &num1);
	fflush(stdin);
	printf("digite P2:");
	scanf("%i", &num2);
	fflush(stdin);
	
	num3 = (num1 + num2) / 2;
	
	if (num3 >= 5){
		printf("aprovado!\n\n");
	}
	else{
		num1 = 5 - num3;
		printf("faltam %i para chegar a media\n\n", num1);
	}
	
	//exercicio 5
	printf("ex_5\n");
	printf("5 > 4\n");
	printf("digite um numero:");
	scanf("%i", &num1);
	printf("digite um numero:");
	scanf("%i", &num2);
	fflush(stdin);
	
	if (num1 > num2){
		printf("%i > %i\n\n", num1, num2);
	}
	else{
		printf("%i > %i\n\n", num2, num1);
	}
	
	//exercicio 6
	printf("ex_6\n");
	printf("ordem crescente\n");
	printf("digite um numero:");
	scanf("%i", &num1);
	fflush(stdin);
	printf("digite um numero:");
	scanf("%i", &num2);
	fflush(stdin);
	
	if (num1 > num2){
		printf("%i, %i\n\n", num2, num1);
	}
	if (num1 < num2){
		printf("%i, %i\n\n", num1, num2);
	}
	
	//exercicio 7
	printf("ex_7\n");
	printf("aumento salario\n");
	printf("digite seu salario:");
	scanf("%f", &nun1);
	fflush(stdin);
	
	if (nun1 <= 1000){
		nun2 = nun1 * 1.05;
		printf("novo salario = %.2f\n\n", nun2);
	}
	else{
		nun2 = nun1 * 1.07;
		printf("novo salario = %.2f\n\n", nun2);
	}
	
	//exercicio 8
	printf("ex_8\n");
	printf("plano celular\n");
	printf("minutos usados:");
	scanf("%f", &nun1);
	fflush(stdin);
	
	if (nun1 > 50){
		nun2 = (nun1-50) * 1.05 + 50;
		printf("valor a pagar = %.2f\n\n", nun2);
	}
	else{
		printf("valor a pagar = 50\n\n");
	}
	
	//exercicio 9
	printf("ex_9\n");
	printf("ano bisexto\n");
	printf("digite um ano:");
	scanf("%i", &num1);
	fflush(stdin);
	
	if (num1 % 4 == 0 && num1 % 100 != 0 && num1 % 400 == 0){
		printf("%i = bisexto", num1);
	}
	else{
		printf("%i = normal", num1);
	}
	
	return 0;
}
