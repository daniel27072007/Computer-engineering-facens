#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char senha1 [7];
char senha2 [7];
int num1 = 0;


int main(){
	
	printf("digite uma senha composta por 6 caracteres\n\n");
	
	printf("Senha:");
	gets(senha1);
	
	if(strlen(senha1) != 6){
		printf("\n***SENHA INVALIDA***\n");
		printf("Senha precisa conter 6 caracteres");
		return 0;
	}
	
	printf("\nConfirme a sua senha\n\n");
	
	printf("Senha:");
	gets(senha2);
	
	if(strlen(senha2) != 6){
		printf("\n***SENHA INVALIDA***\n");
		printf("Senha precisa conter 6 caracteres");
		return 0;
	}
	if(strcmp(senha1, senha2) != 0){
		printf("\n***INVALIDO***\n");
		printf("Voce digitou duas senhas diferentes\n");
		
		for(int i = 0; i < 6; i++){
			if(senha1[i] == senha2[i]){
				num1 += 1;
			}
		}
		
		if(num1 == 3){
			printf("houve  algum  erro  na  digitacao");
		}
		
		return 0;
	}
	
	
	printf("\nSenha Valida");
	
	return 0;
}