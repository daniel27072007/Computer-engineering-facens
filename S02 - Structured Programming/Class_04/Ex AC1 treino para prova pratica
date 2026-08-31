#include <stdio.h>

void calcularEstatisticas(int *vetor, int n, int *maior, int *menor, float *media);

int main(){
	int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = 10;
	int maior;
	int menor;
	float media;
	
	calcularEstatisticas(vetor, n, &maior, &menor, &media);
	
	printf("%d, %d, %.2f", maior, menor, media);
	
	return 0;
}

void calcularEstatisticas(int *v, int n, int *maior, int *menor, float *media){
	*maior = v[0];
	*menor = v[0];
	int media_final = v[0];
	for(int i = 1; i < n; i++){
		if(*maior < v[i]){
			*maior = v[i];
		}
		if(*menor > v[i]){
			*menor = v[i];
		}
		media_final += v[i];
	}
	*media = media_final / n;
}
