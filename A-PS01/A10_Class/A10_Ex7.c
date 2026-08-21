#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int i = 0;
int j = 0;
float matriz[3][5];
float vetor[15];
float soma = 0;
float maior;
float media = 0;
int posI, posJ;
int count = 0;
int linha = 0;


int main(){
	
	printf("\n======Matriz 3x5========");
	for(int i=0; i<3; i++){
		for (int j=0; j<5; j++){
		printf("\nDigite [%i,%i]\n", i, j);
		scanf("%f", &matriz[i][j]);
		fflush(stdin);
		}
	}
	
	
	for(int i=0; i<3; i++){
		for (int j=0; j<5; j++){
			printf("|%.2f|", matriz[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n======Matirz Corrigida======\n\n");
	
	for(int i=0; i<3; i++){
		for (int j=0; j<5; j++){
			if(matriz[i][j] < 0){
				matriz[i][j] = 0;
			}
			printf("|%.2f|", matriz[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n======Soma das Colunas da Matriz Corrigida======\n\n");
	
	for(int i=0; i<3; i++){
		for (int j=0; j<5; j++){
			vetor[j] += matriz[i][j];
		}
	}
	
	for(int i=0; i < 5; i++){
		printf("\nSoma Coluna [%i] = %.2f", i, vetor[i]);
	}
	
	return 0;
}