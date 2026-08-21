#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int i = 0;
int j = 0;
float matriz[0][0];
float maior;
int posI, posJ;

int main(){
	
	printf("\n======Matriz 3x3========");
	for(int j=0; j<3; j++){
		for (int i=0; i<3; i++){
		printf("\nDigite [%i,%i]\n", i, j);
		scanf("%f", &matriz[i][j]);
		fflush(stdin);
		}
	}
	
	for(int j=0; j<3; j++){
		for (int i=0; i<3; i++){
			printf("|%.2f|", matriz[i][j] * 2);	
		}
		printf("\n");
	}
	return 0;
}