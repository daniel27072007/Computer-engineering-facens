#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
	
	char opt = 's';
	float nun1, nun2, nun3 = 0;
	
	do{
		printf("N1:");
		scanf("%f", &nun1);
		fflush(stdin);
		
		if(nun1 < 0 || nun1 > 10){
			printf("***opcao invalida***\n\n");
		}
		
	} while (nun1 < 0 || nun1 > 10);
		printf("\n");
	do{
		printf("N2:");
		scanf("%f", &nun2);
		fflush(stdin);
		
		if(nun2 < 0 || nun2 > 10){
			printf("***opcao invalida***\n\n");
		}
		
	} while (nun2 < 0 || nun2 > 10);
	
	nun3 = (nun1 + nun2) / 2;
	printf("Media = %.2f", nun3);
}