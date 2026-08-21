#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int i = 0;
int j = 0;
int linha = 4, coluna = 3;
int matriz[4][3];

int main(){
	
	printf("\n======Matriz 4x3========");
	for(int j=0; j<3; j++){
		for (int i=0; i<4; i++){
		printf("\nDigite [%i,%i]\n", i, j);
		scanf("%i", &matriz[i][j]);
		fflush(stdin);
		}
	}
	
	for(int j=0; j<3; j++){
		for (int i=0; i<4; i++){
		printf("|%i|", matriz[i][j]);
		}
		printf("\n");	
	}
	
	return 0;
}