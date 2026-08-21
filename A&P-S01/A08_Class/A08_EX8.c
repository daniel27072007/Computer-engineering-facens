#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1 = 0, num2 = 0, num3 = 0;
	int matriz1[10];
	
	while(num2 != 10){
	
		
		printf("\ndigite um numero positivo:");
		scanf("%i", &num1);
		fflush(stdin);	
		
		if(num1 >= 0){
			matriz1[num2] = num1;
			num2 += 1;
		}
		else{
			printf("**opcao invalida**\n");
		}
	}
	
	for (int i = 0; i < 10; i += 1){
		if (i % 2 != 0){
			num3 += matriz1[i];
		}
	}
	
	printf("\ntotal dos impares = %i", num3);
	
	return 0;
}