#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int num1, num2, num3;
	int count, total;
	float nun1, nun2, nun3;
	
	
	for(int i = 0; i < 30; i++){
		printf("---------------\n");
		printf("Nota teorica:");
		scanf("%f", &nun1);
		fflush(stdin);
		
		printf("\nNota laboratorio:");
		scanf("%f", &nun2);
		fflush(stdin);
		
		nun3 = (nun1 * 0.6) + (nun2 * 0.4);
		
		if(nun3 >= 7){
			printf("\n%.2f -> foi bem\n\n", nun3);
		}
		else if(nun3 >= 5 && nun3 < 7){
			printf("\n%.2f -> razoavel\n\n", nun3);
		}
		else{
			printf("\n%.2f -> foi mal\n\n", nun3);
		}
			
	}
	return 0;
}