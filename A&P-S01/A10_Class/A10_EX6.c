#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int i = 0;
int j = 0;
float matriz[3][4];
float vetor[4];
float soma = 0;
float maior;
float media = 0;
int posI, posJ;
int count = 0;
int linha = 0;


int main(){
	
	printf("\n======Matriz 3x4========");
	for(int i=0; i<3; i++){
		for (int j=0; j<4; j++){
		printf("\nDigite [%i,%i]\n", i, j);
		scanf("%f", &matriz[i][j]);
		fflush(stdin);
		}
	}
	
	printf("\nEscolha uma linha:");
	scanf("%i", &linha);
	fflush(stdin);
	
	for(int i=0; i<3; i++){
		for (int j=0; j<4; j++){
			if (i == linha){
				vetor[count] = matriz[i][j];
				count++;
				soma += matriz[i][j];
				media = soma/count;
			}
		}
	}
	
	printf("media da linha = %.2f", media);
	
	
	return 0;
}