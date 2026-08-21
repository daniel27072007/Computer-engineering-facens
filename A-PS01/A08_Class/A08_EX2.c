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
	
	for(int i = 9; i >= 0; i -= 1){
		printf("\n%i", matriz1[i]);
	}
	
	return 0;
}