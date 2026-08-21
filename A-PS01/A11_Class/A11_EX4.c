#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome[20];
char sobrenome[30];
int tamanho = 0;

int main(){
	
	printf("\nDigite seu sobrenome:");
	gets(sobrenome);
	
	printf("\nDigite seu nome:");
	gets(nome);
	
	tamanho = strlen(nome)+strlen(sobrenome);
	
	printf("\n\nNome completo:\n");
	puts(strcat(nome,sobrenome));
	
	printf("\n\nTamanho do nome completo:");
	printf("\n%i", tamanho);
	
	return 0;
}