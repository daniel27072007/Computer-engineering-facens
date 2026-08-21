#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int num1, num2, num3;
	int count, total;
	float nun1;
	
	
	printf("digite um numero:");
	scanf("%i", &num1);
	fflush(stdin);
	
	
	printf("\ndigite um numero:");
	scanf("%i", &num2);
	fflush(stdin);
	
	for(int i = num1 + 1; i < num2; i++){
		
		printf("\n%i", i);
		
	}
	
	
		
	return 0;
}