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
	
		if(nun1 > 0){
			printf("esse numero e positivo\n\n");
		}
		
		else if(nun1 = 0){
			printf("esse numero e nulo\n\n");
		}
		
		else{
			printf("esse numero e negativo\n\n");
		}	
		
	}
		
	return 0;
}