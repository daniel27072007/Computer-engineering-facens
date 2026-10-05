/*
* Lista 7 Estruturas com Ponteiros e Aloca o Din mica? ?? ?
* Disciplina: Programa o Estruturada??
*
* Conte do trabalhado:?
* - struct + ponteiros
* - malloc e realloc
* - ponteiro para ponteiro (**)
* - vetores din micos de struct?
* - busca, c lculo e remo o l gica em mem ria? ?? ? ?
*
* Profa. Dra. Tiemi Christine Sakata
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
/* ============================================================
EXERC CIO 1 Defini o da estrutura? ? ??
============================================================ */
typedef struct {
char nome[MAX];
int idade;
float nota;
char status; // 'A' = ativo | 'I' = inativo
} Aluno;
/* ============================================================
EXERC CIO 2 Aloca o din mica inicial? ? ?? ?
============================================================ */
void aloca_alunos(Aluno **v, int n) {
	Aluno *temp = (Aluno *) realloc(*v, n * sizeof(Aluno));
	if( temp == NULL && n > 0){
		printf("Erro: memoria indisponivel");
		exit(1);
	}
	*v = temp;
}
/* ============================================================
EXERC CIO 3 Leitura de aluno por refer ncia? ? ?
============================================================ */
void le_aluno_ptr(Aluno *a) {
	printf("\nNome: ");
	fgets(a->nome, MAX, stdin);
	a->nome[strcspn(a->nome, "\n")] = '\0';
	printf("\nIdade: ");
	scanf("%d", &a->idade);
	printf("\nNota: ");
	scanf("%f", &a->nota);
	getchar();
	a->status = 'A';
}
/* ============================================================
EXERC CIO 4 Inser o din mica de aluno? ? ?? ?
============================================================ */
void insere_aluno(Aluno **v, int *n) {
	int novoTamanho = *n + 1;
	aloca_alunos(v, novoTamanho);
	printf("\nCadrastando o Aluno %d\n", novoTamanho);
	le_aluno_ptr(&((*v)[*n]));
	*n = novoTamanho;
	printf("\nAluno inserido com sucesso.\n");
}
/* ============================================================
EXERC CIO 5 Impress o de alunos ativos? ? ?
============================================================ */
void imprime_alunos(Aluno *v, int n) {
	int countInativo = 0;
	printf("\nLista de aluno ativos...\n");
	for(int i = 0; i < n; i++){
		if(v[i].status == 'A'){
			printf("\nAluno [%d] | Nome: %s | Idade: %d | Nota: %.2f", i+1, v[i].nome, v[i].idade, v[i].nota);			
		}
		else{
			countInativo += 1;
		}
	}
	if(n <= 0 || n == countInativo){
		printf("\nErro: Nenhum aluno ativo foi achado");
	}
	printf("\n");
}
/* ============================================================
EXERC CIO 6 C lculo da m dia? ? ? ?
============================================================ */
float media_alunos(Aluno *v, int n) {
	float mediaAlunos = 0;
	if(n <= 0){
		printf("\nErro: Nunhum aluno ativo foi achado");
	}
	for(int i = 0; i < n; i++){
		if(v[i].status == 'A'){
			mediaAlunos += v[i].nota;	
		}
	}
	return mediaAlunos/n;
}
/* ============================================================
EXERC CIO 7 Busca por nome? ?
============================================================ */
Aluno* busca_aluno(Aluno *v, int n, char nome[]) {
	for(int i = 0; i < n; i++){
		if(strcmp(v[i].nome, nome) == 0){
			return &v[i];
		}
	}
	return NULL;
}
/* ============================================================
EXERC CIO 8 Remo o l gica? ? ?? ?
============================================================ */
void remove_aluno(Aluno *v, int n, char nome[]) {
	for(int i = 0; i < n; i++){
		if(strcmp(v[i].nome, nome) == 0){
			v[i].status = 'I';
			printf("\nAluno encotrado e marcado como inativo\n");
			return;
		}
	}
	printf("\nErro: aluno nao escontrado\n");
}
/* ============================================================
PROGRAMA PRINCIPAL
============================================================ */
int main(void) {
Aluno *turma = NULL; // vetor din mico?
int qtd = 0; // quantidade de alunos
int op;
char nome[MAX];
Aluno *a;
do {
printf("\n--- MENU ---\n");
printf("1 - Inserir aluno\n");
printf("2 - Listar alunos\n");
printf("3 - Media da turma\n");
printf("4 - Buscar aluno\n");
printf("5 - Remover aluno\n");
printf("0 - Sair\n");
printf("Opcao: ");
scanf("%d", &op);
getchar();
switch (op) {
case 1:
insere_aluno(&turma, &qtd);
break;
case 2:
imprime_alunos(turma, qtd);
break;
case 3:
if (qtd > 0)
printf("\nMedia: %.2f\n", media_alunos(turma, qtd));
break;
case 4:
printf("\nNome: ");
fgets(nome, MAX, stdin);
nome[strcspn(nome, "\n")] = '\0';
a = busca_aluno(turma, qtd, nome);
if (a != NULL) {
printf("Aluno encontrado: %s (nota %.2f)\n",
a->nome, a->nota);
} else {
printf("Aluno nao encontrado.\n");
}
break;
case 5:
printf("\nNome do aluno a remover: ");
fgets(nome, MAX, stdin);
nome[strcspn(nome, "\n")] = '\0';
remove_aluno(turma, qtd, nome);
break;
}
} while (op != 0);
/* ======================================================
Libera o da mem ria?? ?
====================================================== */
free(turma);
turma = NULL;
return 0;
}
