#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char entrada[21];
char saida[21];

int main(){
	
	printf("\nDigite uma palavra: ");
	gets(entrada);
	
	printf("\nSaida: ");
	
	for(int i = 0; i < strlen(entrada); i++){
		printf("%c", toupper(entrada[i]));
	}
	
	return 0;
}