#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int num1, num2, num3;
	int count, total;
	float nun1;
	
	for(int i = 0; i < 10; i += 1){
		
		printf("digite um numero:");
		scanf("%f", &nun1);
		fflush(stdin);
		
		printf("\n%.02f\n\n", nun1*2);
		
	}
		
	return 0;
}
