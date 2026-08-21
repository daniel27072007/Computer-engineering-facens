#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, num2, num3;
	float nun1, nun2, nun3;
	int matriz1[10];
	
	for(int i = 0; i < 10; i+=1){
		printf("\ndigite um numero:");
		scanf("%i", &num1);
		fflush(stdin);
		
		matriz1[i] = num1; 
	}
	printf("\n\n---------------------------\n");
	
	while (num3 != 1){
		printf("\ndigite um numero:");
		scanf("%i", &num1);
		fflush(stdin);
	
		for(int i = 0; i < 10; i+=1){ //mostra repeticoes
			if(matriz1[i] == num1){
			num2 += 1;
			}
		}
		
		if(num2 > 1){
			printf("\neste numero foi repitido %i vezes", num2);
			num3 = 1;
		}
		else{
			printf("\neste numero nao foi repitido, tente outro\n");
		}
	}

	return 0;
}