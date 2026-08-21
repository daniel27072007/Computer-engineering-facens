#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int i = 0;
int j = 0;
float matriz[3][3];
float vetor[3];
float soma = 0;
float maior;
int posI, posJ;
int count = 0;

int main(){
	
	printf("\n======Matriz 3x3========");
	for(int i=0; i<3; i++){
		for (int j=0; j<3; j++){
		printf("\nDigite [%i,%i]\n", i, j);
		scanf("%f", &matriz[i][j]);
		fflush(stdin);
		}
	}
	
	for(int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			if(i == j){
				vetor[count] = matriz[i][j];
				count += 1;
			}
		}
	}
	
	for(int i; i < count; i++){
		printf("|%.2f|", vetor[i]);
		soma += vetor[i];
	}
	printf("\nsoma = %.2f", soma);
	
	return 0;
}