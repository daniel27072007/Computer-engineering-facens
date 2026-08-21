#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 10

int estoque [10][3]; // 0 - Quantidade em estoque, 1- Corredor do Produto, 2- Prateleira do produto
char nomeProduto [10][50];// Nomes dos 10 produtos
int infoProduto	[10][2];// 0 - Id do produto, 1- Preco do produto

int menu = 0;
int cadastrar = 0;
int id = 0;
int num1 = 0;

int main(){
	while(menu != 5){
		printf("\n\n---------------------------------------------------");
		printf("\n[1] - Cadastrar produtos");
		printf("\n[2] - Listar produtos");
		printf("\n[3] - Buscar produto pelo codigo");
		printf("\n[4] - Alterar quantidade em estoque");
		printf("\n[5] - Sair\n");
		
		printf("\nEscolha:");	
		scanf("%i", &menu);
		
		if(menu == 1){
			
			if(cadastrar == MAX){
				printf("\nLIMITE ALCANCADO");
				printf("\nMaximo de %i produtos cadastrados", cadastrar);
			}
			else{
				for(int i = 0; i < MAX; i++){
					printf("\n[%i] Digite o codigo do produto: ", i+1);
					scanf("%i", &infoProduto[i][0]);
					fflush(stdin);
			
					printf("\n[%i] Digite o nome do produto: ", i+1);
					scanf("%s", &nomeProduto[i]);
					fflush(stdin);

					printf("\n[%i] Digite o preco do produto: ", i+1);
					scanf("%i", &infoProduto[i][1]);
					fflush(stdin);
			
					printf("\n[%i] Digite a quantidade em estoque do produto: ", i+1);
					scanf("%i", &estoque[i][0]);
					fflush(stdin);
			
					printf("\n[%i] Digite o corredor do produto: ", i+1);
					scanf("%i", &estoque[i][1]);
					fflush(stdin);
			
					printf("\n[%i] Digite a pratileira do produto: ", i+1);
					scanf("%i", &estoque[i][2]);
					fflush(stdin);
					cadastrar += 1;
				}	
			}
		}
		else if(menu == 2){
			for(int i = 0; i < MAX; i++){
				printf("\n----------------------[%i]-------------------------", i+1);
				printf("\nCodigo do Produto: %i", infoProduto[i][0]);
				printf("\nNome do Produto: %s", nomeProduto[i]);
				printf("\nPreco do Produto: %i", infoProduto[i][1]);
				printf("\nQuantidade em Estoque do Produto: %i", estoque[i][0]);
				printf("\nCorredor do Produto: %i", estoque[i][1]);
				printf("\nPrateleira do Produto: %i", estoque[i][2]);
			}
		}
		else if(menu == 3){
			printf("\nDigite o codigo do produto que deseja procurar:");
			scanf("%i", &id);
			fflush(stdin);
			
			for(int i = 0; i < MAX; i++){
				if(id == infoProduto[i][0]){
					printf("\nPRODUTO ENCONTRADO!\n");
					printf("\n----------------------[%i]-------------------------", i+1);
					printf("\nCodigo do Produto: %i", infoProduto[i][0]);
					printf("\nNome do Produto: %s", nomeProduto[i]);
					printf("\nPreco do Produto: %i", infoProduto[i][1]);
					printf("\nQuantidade em Estoque do Produto: %i", estoque[i][0]);
					printf("\nCorredor do Produto: %i", estoque[i][1]);
					printf("\nPrateleira do Produto: %i", estoque[i][2]);
					num1 = 1;
				}
			}
			if(num1 != 1){
				printf("\nProduto nao encontrado.");
			}
			num1 = 0;
		}
		else if(menu == 4){
			printf("\nDigite o codigo do produto que deseja atualizar o estoque:");
			scanf("%i", &id);
			fflush(stdin);
			
			for(int i = 0; i < MAX; i++){
				if(id == infoProduto[i][0]){
					printf("\nDigite o novo estoque do produto:");
					scanf("%i", &estoque[i][0]);
					fflush(stdin);
					printf("\nEstoque atualizado!");
					num1 = 1;
				}
			}
			if(num1 != 1){
				printf("\nProduto nao encontrado.");
			}
			num1 = 0;
		}
		else if(menu == 5){
			printf("\nSaindo...");
		}
		else{
			printf("\nOPCAO INVALIDA");
		}
	}
	return 0;
}
