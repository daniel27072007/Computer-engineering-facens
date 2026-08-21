#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, num2 = 0, num3;
	float nun1, nun2, nun3;
	int matriz1[10], matriz2[10];
	
	for(int i = 0; i < 10; i+=1){
		printf("\ndigite um numero:");
		scanf("%i", &num1);
		fflush(stdin);
		
		matriz1[i] = num1; 
	}
	printf("\n\n--------------------------------\n");
	
	for(int i = 0; i < 10; i+=1){
		printf("%i ", matriz1[i]);
	}
	printf("\n");
	for(int i = 9; i >= 0; i-=1){
		printf("%i ", matriz1[i]);
	}
	
	printf("\n--------------------------------\n");
	
	for(int i = 0; i < 10; i+=1){
		if(matriz1[i] == matriz1[9-i]){
			matriz2[num2] = i;
			num2 += 1;
		}
	}
	
	printf("\nse repetem nas posicoes:");
	for(int i = 0; i < num2; i+=1){
		printf("%i, ", matriz2[i]);
	}

	return 0;
}