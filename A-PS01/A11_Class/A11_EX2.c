#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char word [12];


int main(){
	
	while(strlen(word) < 2 || strlen(word) > 11){
		printf("Escreva uma palavra\n\n");
		gets(word);
	
		if(strlen(word) < 2 || strlen(word) > 11){
			printf("\nPalavra deve conter entre 3 e 10 caracteres\n");
			printf("A sua possui %i\n\n", strlen(word));
		}
		else{
			printf("\npalavra:");
			puts(word);
		}
	}
	return 0;
}
