#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int menu = 0;
int codigo[10];
int num1 = 0;
int num2 = 0;
int num3 = 0;
int idade[10];
float salario[10];


int main(){
	
	while(menu != 4){
		printf("---------------------------------------");
		printf("\n[1] - cadastrar pessoa\n");
		printf("[2] - mostrar todos cadastrado\n");
		printf("[3] - procurar pessoa por codigo\n");
		printf("[4] - sair\n\n");
		scanf("%i", &menu);
		fflush(stdin);
	
		if(menu == 1){
			printf("digite o codigo da pessoa:");
			scanf("%i", &codigo[num1]);
			fflush(stdin);
		
			printf("digite a idade da pessoa:");
			scanf("%i", &idade[num1]);
			fflush(stdin);
			
			printf("digite o salario da pessoa:");
			scanf("%f", &salario[num1]);
			fflush(stdin);
		
			num1++;
		}
		if (menu == 2){
			for(int i = 0; i < num1; i++){
				printf("\nPessoa %i:", i+1);
				printf("\n-Codigo Pessoal: %i", codigo[i]);
				printf("\n-Idade: %i", idade[i]);
				printf("\n-Salario: %.2f\n", salario[i]);
			}
		}
		if (menu == 3){
			printf("\nDigite o codigo da pessoa:");
			scanf("%i", &num2);
			fflush(stdin);
			
			for(int i = 0; i < num1; i++){
				if (num2 == codigo[i]){
					printf("\nPessoa %i:", i+1);
					printf("\n-Codigo Pessoal: %i", codigo[i]);
					printf("\n-Idade: %i", idade[i]);
					printf("\n-Salario: %.2f\n", salario[i]);
					num3 = 1;
				}
			}
			if(num3 == 0){
				printf("***codigo nao encontrado***\n");
			}
		}
		if (menu == 4){
			printf("Saindo...");
		}
		if (menu != 1 && menu != 2 && menu != 3 && menu != 4) {
			printf("***numero invalido***\n");
		}
	}
	
	return 0;
}