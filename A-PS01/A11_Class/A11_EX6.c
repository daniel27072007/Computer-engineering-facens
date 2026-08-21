#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char entrada[21];
char saida[21];

int main(){
	
	printf("\nDigite uma palavra:");
	gets(entrada);
	
	printf("\nSaida: ");
	
	for(int i = strlen(entrada)-1; i >= 0; i--){
		printf("%c", entrada[i]);
	}
	
	return 0;
}