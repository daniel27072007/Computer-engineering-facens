/*
* Lista 6 Estruturas com Ponteiros (SEM malloc)?
* Disciplina: Programa o Estruturada??
*
* Conte do trabalhado:?
* - Ponteiros para struct
* - Operador ->
* - Passagem de struct por refer ncia?
* - Vetores de struct acessados por ponteiros
* - Structs aninhadas com ponteiros
*
* RESTRICES:
* - N O usar malloc, calloc ou realloc?
* - N O retornar ponteiros alocados dinamicamente?
* - Usar apenas vetores est ticos?
*
* Profa. Dra. Tiemi Christine Sakata
*/
#include <stdio.h>
#include <string.h>
#define MAX 50
#define TAM 3
/* ============================================================
EXERC CIO 1 Impress o usando ponteiro para struct? ? ?
============================================================ */
typedef struct {
char nome[MAX];
int idade;
float nota;
} Aluno;
void imprime_aluno_ptr(Aluno *a) {
	printf("\nNome: %s", (*a).nome);
	printf("\nIdade: %d", (*a).idade);
	printf("\nNota: %.2f", (*a).nota);
}
/* ============================================================
EXERC CIO 2 Leitura por refer ncia? ? ?
============================================================ */
void le_aluno_ptr(Aluno *a) {
	printf("\nDigite o nome: ");
	scanf("%49s", (*a).nome);
	
	printf("\nDigite a idade: ");
	scanf("%d", &(*a).idade);
	
	printf("\nDigite a nota: ");
	scanf("%f", &(*a).nota);
}
/* ============================================================
EXERC CIO 3 Vetor de struct acessado por ponteiro? ?
============================================================ */
void le_turma_ptr(Aluno *v, int n) {
	for(int i = 0; i < n; i++){
		printf("\n\nDigite o nome: ");
		scanf("%49s", v[i].nome);
		
		printf("\nDigite a idade: ");
		scanf("%d", &v[i].idade);
		
		printf("\nDigite a nota: ");
		scanf("%f", &v[i].nota);
	}
}
void imprime_turma_ptr(Aluno *v, int n) {
	for(int i = 0; i < n; i++){
		printf("\n\nNome: %s", v[i].nome);
		printf("\nIdade: %d", v[i].idade);
		printf("\nNota: %.2f", v[i].nota);
	}
}
/* ============================================================
EXERC CIO 4 C lculo usando ponteiros? ? ?
============================================================ */
float media_turma_ptr(Aluno *v, int n) {
	float mediaAlunos = 0;
	for(int i = 0; i < n; i++){
		mediaAlunos += v[i].nota;
	}
	mediaAlunos = mediaAlunos / n;
	return mediaAlunos;
}
/* ============================================================
EXERC CIO 5 Contagem condicional usando ponteiros? ?
============================================================ */
int conta_aprovados_ptr(Aluno *v, int n) {
	int aprovadosCount = 0;
	for(int i = 0; i < n; i++){
		if(v[i].nota >= 6){
			aprovadosCount++;
		}
	}
	return aprovadosCount;
}
/* ============================================================
EXERC CIO 6 Busca usando ponteiros? ?
============================================================ */
Aluno* busca_aluno_ptr(Aluno *v, int n, char nome[]) {
	for(int i = 0; i < n; i++){
		if(strcmp(nome, v[i].nome) == 0){
			return &v[i];
		}
	}
	return NULL;
}
/* ============================================================
EXERC CIO 7 Struct aninhada com ponteiro? ?
============================================================ */
typedef struct {
char rua[MAX];
int numero;
} Endereco;
typedef struct {
char nome[MAX];
Endereco end;
} Pessoa;
void imprime_pessoa_ptr(Pessoa *p) {
	printf("\nPessoa: %s", (*p).nome);
	printf("\nRua: %s", (*p).end.rua);
	printf("\nNumero: %d", (*p).end.numero);
}
void le_pessoa_ptr(Pessoa *p) {
	printf("\nDigite o nome: ");
	scanf("%49s", (*p).nome);
	
	printf("\nDigite a rua: ");
	scanf("%49s", (*p).end.rua);
	
	printf("\nDigite o numero: ");
	scanf("%d", &(*p).end.numero);
}
/* ============================================================
EXERC CIO 8 Vetor de struct aninhada com ponteiro? ?
============================================================ */
void le_pessoas_ptr(Pessoa *v, int n) {
	for(int i = 0; i < n; i++){
		printf("\n\nDigite o nome: ");
		scanf("%49s", v[i].nome);
		
		printf("\nDigite a rua: ");
		scanf("%49s", v[i].end.rua);
		
		printf("\nDigite a numero: ");
		scanf("%d", &v[i].end.numero);
	}
}

void imprime_pessoas_ptr(Pessoa *v, int n) {
	for(int i = 0; i < n; i++){
		printf("\n\nPessoa: %s", v[i].nome);
		printf("\nRua: %s", v[i].end.rua);
		printf("\nNumero: %d", v[i].end.numero);
	}
}

/* ============================================================
PROGRAMA PRINCIPAL
============================================================ */
int main(void) {
Aluno turma[TAM];
Pessoa pessoas[2];
Aluno *a;
printf("\n--- LEITURA DA TURMA ---\n");
le_turma_ptr(turma, TAM);
printf("\n--- DADOS DA TURMA ---\n");
imprime_turma_ptr(turma, TAM);
printf("\n\nMedia da turma: %.2f\n", media_turma_ptr(turma, TAM));
printf("Aprovados: %d\n", conta_aprovados_ptr(turma, TAM));
printf("\n\nBuscar aluno por nome: ");
char nome_busca[MAX];
int c;
while ((c = getchar()) != '\n' && c != EOF);
fgets(nome_busca, MAX, stdin);
nome_busca[strcspn(nome_busca, "\n")] = '\0';
a = busca_aluno_ptr(turma, TAM, nome_busca);
if (a != NULL) {
imprime_aluno_ptr(a);
} else {
printf("Aluno nao encontrado.\n");
}
printf("\n\n--- DADOS DE PESSOAS ---\n");
le_pessoas_ptr(pessoas, 2);
imprime_pessoas_ptr(pessoas, 2);
return 0;
}