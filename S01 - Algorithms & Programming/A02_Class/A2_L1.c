#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float num1, num2, num3, num4;
	int nun1, nun2, nun3, nun4, nun5, nun6;
	
	// exercicio 1
	printf("exercicio 1\n");
	printf("dobro do numero\n\n");
	printf("digite um numero:");
	scanf("%f", &num1);
	fflush(stdin);
	num2 = num1 * 2;
	printf("%.2f * 2 = %.2f\n\n", num1, num2);
	
	
	//exercicio 2
	printf("exercicio 2\n");
	printf("media aritimetrica\n\n");
	printf("digite um numero:");
	scanf("%f", &num1);
	fflush(stdin);
	printf("\ndigite um numero:");
	scanf("%f", &num2);
	fflush(stdin);
	
	num3 = (num1 + num2) / 2;
	
	printf("%.2f + %.2f / 2 = %.2f\n\n", num1, num2, num3);
	
	//exercicio 3
	printf("exrcicio 3\n");
	printf("metros pra centimetros\n\n");
	printf("digite uma metragem:");
	scanf("%f", &num1);
	fflush(stdin);
	
	num2 = num1 *100;
	
	printf("%.0fm --> %.0fcm\n\n", num1, num2);
	
	//exercicio 4
	printf("exercicio 4\n");
	printf("dias de vida\n\n");
	printf("ano de nascimento:");
	scanf("%f", &num1);
	fflush(stdin);
	
	num2 = (2026 - num1);
	num3 = num2 *365;
	
	printf("%.0f anos ---> %.0f dias\n\n", num2, num3);
	
	//exercicio 5
	printf("exercicio 5\n");
	printf("divisao e resto\n\n");
	printf("digite um numero:");
	scanf("%i", &nun1);
	fflush(stdin);
	printf("\ndigite um numero:");
	scanf("%i", &nun2);
	fflush(stdin);
	
	nun3 = nun1 / nun2;
	nun4 = nun1 % nun2;
	
	printf("%i / %i = %i resto %i\n\n", nun1, nun2, nun3, nun4);
	
	//exercicio 6
	printf("exercicio 6\n");
	printf("area do triangulo\n\n");
	printf("digite o comprimento da base:");
	scanf("%i", &nun1);
	fflush(stdin);
	printf("\ndigite a altura:");
	scanf("%i", &nun2);
	fflush(stdin);
	
	nun3 = (nun1 * nun2) / 2;
	
	printf("\n%i * %i / 2 = %i\n\n", nun1, nun2, nun3);
	
	//exercicio 7
	printf("exercicio 7\n");
	printf("Farehn para Celcius\n\n");
	printf("Digite uma temperatura:");
	scanf("%f", &num1);
	fflush(stdin);
	
	num2 = (num1 - 32) *1.8;
	
	printf("%.0fF ---> %.0fC\n\n", num1, num2);
	
	//exercicio 8
	printf("exercicio 8\n");
	printf("perimetro de uma circunferencia\n\n");
	printf("digite o raio do circulo:");
	scanf("%f", &num1);
	fflush(stdin);
	
	num2 = num1 * 2 * 3.14;
	
	printf("%.2f\n\n", num2);
	
	//exercicio 9
	printf("exercicio 9\n");
	printf("sqrt & pow8 \n\n");
	printf("Digite um numero:");
	scanf("%i", &nun1);
	fflush(stdin);
	
	nun2 = sqrt(nun1);
	nun3 = pow(nun1, 8);
	
	printf("sqrt = %i and Pow8 = %i\n\n", nun2, nun3);
	
	//exercicio 10
	printf("exercicio 10\n");
	printf("consumo medio de combustivel \n\n");
	printf("Distancia percorrida:");
	scanf("%i", &nun1);
	fflush(stdin);
	printf("Combustivel gasto:");
	scanf("%i", &nun2);
	fflush(stdin);
	
	nun3 = nun1 / nun2;
	
	printf("consumo medio = %i\n\n", nun3);
	
	//exercicio 11
	printf("exercicio 11\n");
	printf("velocidade media\n\n");
	printf("Distancia percorrida:");
	scanf("%i", &nun1);
	fflush(stdin);
	printf("tempo gasto:");
	scanf("%i", &nun2);
	fflush(stdin);
	
	nun3 = nun1 / nun2;
	
	printf("velocidade media = %i\n\n", nun3);
	
	//exercicio 12
	printf("exercicio 12\n");
	printf("salario mensal\n\n");
	printf("horas mensais normais:");
	scanf("%i", &nun1);
	fflush(stdin);
	printf("horas mensais extras:");
	scanf("%i", &nun2);
	fflush(stdin);
	
	nun3 = (nun1 * 10) + (nun2 * 15);
	
	printf("salario mensal = %i\n\n", nun3);
	
	//exercicio 13
	printf("exercicio 13\n");
	printf("Pagar encanador\n\n");
	printf("numeros de dias de contrato:");
	scanf("%i", &nun1);
	fflush(stdin);
	
	num2 = (nun1 * 35)*0.92;
	
	printf("dinheiro a ser pago = %.2f\n\n", num2);
	
	//exercicio 14
	printf("exercicio 14\n");
	printf("Nota de A&P\n\n");
	printf("P1 Pratica:");
	scanf("%i", &nun1);
	fflush(stdin);
	printf("P2 Pratica:");
	scanf("%i", &nun2);
	fflush(stdin);
	printf("P1 Teorica:");
	scanf("%i", &nun3);
	fflush(stdin);
	printf("P2 Teorica:");
	scanf("%i", &nun4);
	fflush(stdin);
	
	nun5 = (nun1 + nun2) / 2;
	nun6 = (nun3 + nun4) / 2;
	nun1 = ((nun5 * 0.4) + (nun6 * 0.6)) / 1;
	
	printf("nota final = %i\n\n", nun1);
	
	
	
	return 0;
}
