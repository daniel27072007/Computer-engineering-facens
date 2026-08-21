#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, num2, num3;
	float nun1, nun2, nun3;
	int matriz1[10];
	
	for(int i = 0; i < 12; i+=1){
		printf("\ndigite um numero:");
		scanf("%i", &num1);
		fflush(stdin);
		
		matriz1[i] = num1;
		
		if(num1 < 0){
			num2 += 1;
		}
	}
	
	printf("\na matriz possui %i numeros negativos", num2);
	
	return 0;
}