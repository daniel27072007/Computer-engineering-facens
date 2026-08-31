#include <stdio.h>
#include <stdlib.h>

void calcularEstatisticas(int *vetor, int n, int *maior, int *menor, float *media);

int main(){
	int *vetor;
	int n;
	int maior;
	int menor;
	float media;
	
	printf("Digite a quantidade de leituras: ");
	scanf("%d", &n);
	vetor = (int *) malloc(n * sizeof(int));
	if(vetor == NULL){
		printf("ERROR - Malloc mal sucedido");
		return 1;
	}
	printf("Digite as temperaturas:\n");
	for(int i = 0; i < n; i++){
		printf("[%d]", i+1);
		scanf("%d", (vetor+i));
	}
	calcularEstatisticas(vetor, n, &maior, &menor, &media);
	printf("\n------------------------------------------------RESULTADOS-------------------------------------------------\n\n");
	printf("                                    Maior: %d | Menor: %d | Media: %.2f", maior, menor, media);
	printf("\n\n-----------------------------------------------------------------------------------------------------------\n");
	free(vetor);
	return 0;
}

void calcularEstatisticas(int *v, int n, int *maior, int *menor, float *media){
	*maior = *v;
	*menor = *v;
	int media_final = *v;
	for(int i = 1; i < n; i++){
		if(*maior < *(v+i)){
			*maior = *(v+i);
		}
		if(*menor > *(v+i)){
			*menor = *(v+i);
		}
		media_final += *(v+i);
	}
	*media = (float) media_final / n;
}