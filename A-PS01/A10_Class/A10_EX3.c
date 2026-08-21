#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int i = 0;
int j = 0;
float matriz[4][3];
float maior;
int posI, posJ;

int main(){
	
	printf("\n======Matriz 5x3========");
	for(int j=0; j<3; j++){
		for (int i=0; i<5; i++){
		printf("\nDigite [%i,%i]\n", i, j);
		scanf("%f", &matriz[i][j]);
		fflush(stdin);
		}
	}
	
	for(int j=0; j<3; j++){
		for (int i=0; i<5; i++){
			if(maior < matriz[i][j]){
				maior = matriz[i][j];
				posI = i;
				posJ = j;
			}	
		}
	}
	printf("\nMaior numero da matiz = %.2f | Posicao [%i][%i]", maior, posI, posJ);
	return 0;
}