#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char letra;
int repeticoes = 0;
char saida[21];

int main(){
	
	printf("\nDigite um caractere:\n");
	scanf("%c", &letra);
	fflush(stdin);
	
	printf("\nQuantas vezes ele se repitira?\n");
	scanf("%i", &repeticoes);
	fflush(stdin);
	
	for (int i = 0; i < repeticoes; i++){
		saida[i] = letra;
	}
	
	printf("\n\nSaida: ");
	puts(saida);
	
	return 0;
}