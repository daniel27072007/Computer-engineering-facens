#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, num2, num3;
	float nun1, nun2, nun3;
	int matriz1[8];
	
	for(int i = 0; i < 8; i+=1){
		printf("\ndigite um numero:");
		scanf("%i", &num1);
		fflush(stdin);
		
		matriz1[i] = num1; 
	}
	
	printf("\nQual numero digitado deseja ver?\n");
	scanf("%i", &num1);
	fflush(stdin);
	
	printf("\n\n%i", matriz1[num1-1]);
	
	return 0;
}