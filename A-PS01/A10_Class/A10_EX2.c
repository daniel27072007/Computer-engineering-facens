#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int i = 0;
int j = 0;
float matriz[4][3];
float soma;

int main(){
	
	printf("\n======Matriz 3x4========");
	for(int j=0; j<4; j++){
		for (int i=0; i<3; i++){
		printf("\nDigite [%i,%i]\n", i, j);
		scanf("%f", &matriz[i][j]);
		fflush(stdin);
		}
	}
	
	for(int j=0; j<4; j++){
		for (int i=0; i<3; i++){
		soma += matriz[i][j];	
		}
	}
	printf("soma da matiz = %.2f", soma);
	
	return 0;
}