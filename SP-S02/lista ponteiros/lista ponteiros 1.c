#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	float *vetor;
	
	printf("\nDigite a quantidade de numeros reais: ");
	scanf("%d", &n);	
	vetor = (float *) malloc(n * sizeof(float));
	
	if (vetor == NULL) {
		printf("\nerror: memoria cheia");
		return 1;
	}
	
	for(int i = 0; i < n; i++){
		printf("\nDigite o numero %d: ", i + 1);
		scanf("%f", &vetor[i]);
	}
	
	printf("\nNumeros guardados: ");
	for(int i = 0; i < n; i++){
		printf("%.2f ", vetor[i]);
	}
	
	free(vetor);
	return 0;
}