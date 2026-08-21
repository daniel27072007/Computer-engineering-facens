#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


float matriz[4][4];
float maior, menor;
int posI, posJ;


int main(){
	
	printf("\n======Matriz 4x4========");
	for(int i=0; i<4; i++){
		for (int j=0; j<4; j++){
		printf("\nDigite [%i,%i]\n", i, j);
		scanf("%f", &matriz[i][j]);
		fflush(stdin);
		}
	}
	
	//descobre maior e sua linha
	
	maior = matriz[0][0];
    posI = 0;
	
	for(int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			if(maior < matriz[i][j]){
				maior = matriz[i][j];
				posI = i;
			}	
		}
	}
	
	//acha minimax e sua coluna
	
	menor = matriz[posI][0];
    posJ = 0;
	
	for(int j=0; j<4; j++){
		maior = menor;
		if(menor > matriz[posI][j]){
			menor = matriz[posI][j];
			posJ = j;
		}
	}
	
	printf("\nMaior numero da matriz: %.2f (na linha %i)", maior, posI);
    printf("\nMinimax da matriz: %.2f | Posicao: [%i,%i]\n", menor, posI, posJ);
	
	return 0;
}