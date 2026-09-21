/*
* Lista de Exercícios – Estruturas (struct)
* Conteúdo: struct, struct aninhada, vetores de struct
* Observações:
* - NÃO usar ponteiros explicitamente
* - NÃO usar alocação dinâmica
* - Usar apenas structs, campos simples e vetores
* - Completar os trechos indicados (TODO)
*
* Arquivo: lista_structs_stubs.c
*/
#include <stdio.h>
#include <string.h>
#define MAX 50
/* =============================================================
Exercício 1 — Definição e uso básico de struct
============================================================= */
struct Aluno {
char nome[MAX];
int idade;
float nota;
};
void imprime_aluno(struct Aluno a) {
	printf("\nNome: %s", a.nome);
	printf("\nIdade: %d", a.idade);
	printf("\nNota: %.2f", a.nota);
}
/* =============================================================
Exercício 2 — Vetor de estruturas
============================================================= */
void le_turma(struct Aluno turma[], int n) {
	for(int i = 0; i < n; i++){
		scanf("%49s", turma[i].nome);
		scanf("%d", &turma[i].idade);
		scanf("%f", &turma[i].nota);
	}
}
void imprime_turma(struct Aluno turma[], int n) {
	for(int i = 0; i < n; i++){
		printf("\nAluno [%d]", i+1);
		printf("\nNome: %s", turma[i].nome);
		printf("\nIdade: %d", turma[i].idade);
		printf("\nNota: %.2f", turma[i].nota);
	}
}
/* =============================================================
Exercício 3 — Cálculo usando vetor de struct
============================================================= */
float media_turma(struct Aluno turma[], int n) {
	float mediaTurma = 0;
	for(int i = 0; i < n; i++){
		mediaTurma += turma[i].nota;
	}
	mediaTurma = mediaTurma/n;
	return mediaTurma;
}
/* =============================================================
Exercício 4 — Struct aninhada
============================================================= */
struct Endereco {
char rua[MAX];
int numero;
};
struct Pessoa {
char nome[MAX];
struct Endereco end;
};
void imprime_pessoa(struct Pessoa p) {
	printf("\nNome: %s", p.nome);
	printf("\nEndereco: %s", p.end.rua);
	printf("\nNumero: %d", p.end.numero);
}
/* =============================================================
Exercício 5 — Vetor de struct com struct aninhada
============================================================= */
void le_pessoas(struct Pessoa v[], int n) {
	for(int i = 0; i < n; i++){
		scanf("%49s", v[i].nome);
		scanf("%49s", v[i].end.rua);
		scanf("%d", &v[i].end.numero);
	}
}
void imprime_pessoas(struct Pessoa v[], int n) {
	for(int i = 0; i < n; i++){
		printf("\nPessoa [%d]", i+1);
		printf("\nNome: %s", v[i].nome);
		printf("\nEndereco: %s", v[i].end.rua);
		printf("\nNumero: %d", v[i].end.numero);
	}
}
/* =============================================================
Exercício 6 — Busca em vetor de struct
============================================================= */
int busca_aluno_por_nome(struct Aluno turma[], int n, char nome[]) {
	int indiceAluno = 0;
	char nomeAluno[MAX];
	for(int i = 0; i < n; i++){
		if(strcmp(nome, turma[i].nome)){
			return i;
		}
	}
	return -1;
}
/* =============================================================
Exercício 7 — Contagem condicional
============================================================= */
int conta_aprovados(struct Aluno turma[], int n) {
	int aprovadosCount = 0;
	for(int i = 0; i < n; i++){
		if(turma[i].nota >= 6){
			aprovadosCount += 1;
		}
	}
	return aprovadosCount;
}
/* =============================================================
Exercício 8 — Struct para dados agrupados
============================================================= */
struct Data {
int dia;
int mes;
int ano;
};
void imprime_data(struct Data d) {
	printf("\nDia: %d", d.dia);
	printf("\nMes: %d", d.mes);
	printf("\nAno: %d", d.ano);
}
/* =============================================================
Programa principal (parcialmente pronto)
============================================================= */
int main(void) {
	struct Aluno turma[3];
	le_turma(turma, 3);
	imprime_turma(turma, 3);
	printf("\nMedia da turma: %.2f\n", media_turma(turma, 3));
	printf("Aprovados: %d\n", conta_aprovados(turma, 3));
	struct Pessoa pessoas[2];
	le_pessoas(pessoas, 2);
	imprime_pessoas(pessoas, 2);
	struct Data hoje = {27, 3, 2026};
	imprime_data(hoje);
return 0;
}