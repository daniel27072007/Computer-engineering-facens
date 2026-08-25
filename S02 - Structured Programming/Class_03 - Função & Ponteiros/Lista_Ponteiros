#include <stdio.h>
#include <stdlib.h>

//funcoes (prototipo):
void inc(int x);
void troca_invalida(int x, int y);
void troca_ref(int *x, int *y);
void inc_ref(int *p);
int troca_se_maior(int *a, int *b);
void normaliza_trio(float *x, float *y, float *z);
void zera(int *v, int n);
int soma(int *v, int n);
float media_int(int *v, int n);
void escala(int *v, int n, int k);
void troca_extremos(int *v, int n);
int filtra_faixa(const int *origem, int n, int *destino, float L, float U);
int indice_min(const int *v, int n);
int indice_max(const int *v, int n);
void remove_primeiro(int *v, int *n, int alvo);
void inverte(int *v, int n);

int main (){
	//atribuicao de variavel
	int a = 10;
	int b = 7;
	int trocou;
	float num1 = 8.0;
	float num2 = 5.0;
	float num3 = 5.0;
	int n = 10;
	int n2 = 5;
	int v1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int v2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int v3[10];
    
	//EX01
	inc(a);
	printf("\n[1] a = %d (esperando 10)", a);
    
	//EX02
	troca_invalida(a, b);
	printf("\n[2] a = %d & b = %d (esperando 10 & 7)", a, b);
    
	//EX03
	printf("\n[3] Em ambos EX anteriores as funcoes nao alteraram as variaveis pois a funcao pega uma copia da variavel");
	printf("\n    para conseguir alterar, e nessesario colocar no argumento da funcao um ponteiro que recebe o endereco da variavel");
	printf("\n    pois alterando dentro da funcao o ponteiro e possivel alterar o valor da variavel");
    
	//EX04
	troca_ref(&a, &b);
	printf("\n[4] a = %d & b = %d (esperando 7 & 10)", a, b);
    
	//EX05
	inc_ref(&a);
	printf("\n[5] a = %d (esperando 8)", a);
    
	//EX06
	printf("\n[6] Antes: b = %d & a = %d", b, a);
	trocou = troca_se_maior(&b, &a);
	printf("\n    Depois: a = %d & b = %d", b, a);
	printf("\n    Retorno da funcao: %d (esperando 1)", trocou);
    
	//EX07
	normaliza_trio(&num1, &num2, &num3);
	printf("\n[7] Apos normalizar: num1 = %.2f num2 = %.2f num3 = %.2f", num1, num2, num3);
    
	//EX08
	printf("\n[8] Antes: ");
	for(int i = 0; i < n; i++){
		printf("%d ", v1[i]);
	}
	zera(v1, n);
	printf("\n    Depois: ");
	for(int i = 0; i < n; i++){
		printf("%d ", v1[i]);
	}
	
	//EX09
	printf("\n[9] Vetor: ");
	for(int i = 0; i < n; i++){
		printf("%d ", v2[i]);
	}
	int soma_int = soma(v2, n);
	printf("\n    Soma dos valores do vetor: %d", soma_int);
	float media = media_int(v2, n);
	printf("\n    Media dos valores do vetor: %.2f", media);
	
	//EX10
	printf("\n[10] Antes: ");
	for(int i = 0; i < n; i++){
		printf("%d ", v2[i]);
	}
	escala(v2, n, 2);
	printf("\n     Depois: ");
	for(int i = 0; i < n; i++){
		printf("%d ", v2[i]);
	}
	
	//EX11
	printf("\n[11] Antes: ");
	for(int i = 0; i < n; i++){
		printf("%d ", v2[i]);
	}
	troca_extremos(v2, n);
	printf("\n     Depois: ");
	for(int i = 0; i < n; i++){
		printf("%d ", v2[i]);
	}
	
	//EX12
	printf("\n[12] Vetor Origem: ");
	for(int i = 0; i < n; i++){
		printf("%d ", v2[i]);
	}
	int num_filtrados = filtra_faixa(v2, 10, v3, 5, 15);
	n2 = num_filtrados;
	printf("\n     Numeros filtrados: %d", num_filtrados);
	printf("\n     Vetor Destino: ");
	for(int i = 0; i < num_filtrados; i++){
		printf("%d ", v3[i]);
	}
	
	//EX13
	printf("\n[13] Vetor: ");
	for(int i = 0; i < num_filtrados; i++){
		printf("%d ", v3[i]);
	}
	int valor_min = indice_min(v3, num_filtrados);
	int valor_max = indice_max(v3, num_filtrados);
	printf("\n     Valor minimo esta no index: %d", valor_min);
	printf("\n     Valor maximo esta no index: %d", valor_max);
	
	//EX14
	printf("\n[14] Antes: ");
	for(int i = 0; i < n2; i++){
		printf("%d ", v3[i]);
	}
	remove_primeiro(v3, &n2, 8);
	printf("\n     Depois: ");
	for(int i = 0; i < n2; i++){
		printf("%d ", v3[i]);
	}
	
	//EX15
	printf("\n[15] Antes: ");
	for(int i = 0; i < n2; i++){
		printf("%d ", v3[i]);
	}
	inverte(v3, n2);
	printf("\n     Depois: ");
	for(int i = 0; i < n2; i++){
		printf("%d ", v3[i]);
	}
	
	return 0;
}

//funcoes:
//EX01
void inc(int x){
	x = x + 1;
}

//EX02
void troca_invalida(int x, int y){
	int temp = x;
	x = y;
	y = temp;
}

//EX04
void troca_ref(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

//EX05
void inc_ref(int *p){
	if (!p) return;
	(*p)++;
}

//EX06
int troca_se_maior(int *a, int *b){
	if (!a || !b) return 0;
	if(*a > *b){
		int temp = *a;
		*a = *b;
		*b = temp;
		return 1;
	}
	return 0;
}

//EX07
void normaliza_trio(float *x, float *y, float *z){
	if (!x || !y || !z) return;
	float media = (*x + *y + *z) / 3.0f;
	*x = *x - media;
	*y = *y - media;
	*z = *z - media;
}

//EX08
void zera(int *v, int n){
	for(int i = 0; i < n; i++){
		v[i] = 0;
	}
}

//EX09
int soma(int *v, int n){
	int soma = 0;
	for(int i = 0; i < n; i++){
		soma += v[i];
	}
	return soma;
}
float media_int(int *v, int n){
	int soma_int = soma(v, n);
	float media = (float)soma_int / n;
	return media;
}

//EX10
void escala(int *v, int n, int k){
	for(int i = 0; i < n; i++){
		v[i] = v[i] * k;
	}
}

//EX11
void troca_extremos(int *v, int n){
	if(n <= 1) return;
	
	int temp = v[0];
	v[0] = v[n-1];
	v[n-1] = temp;
}

//EX12
int filtra_faixa(const int *origem, int n, int *destino, float L, float U){
	int qte_copiada = 0;
	for(int i = 0; i < n; i++){
		if(origem[i] >= L && origem[i] <= U){
			destino[qte_copiada] = origem[i];
			qte_copiada++;
		}
	}
	return qte_copiada;
}

//EX13
int indice_min(const int *v, int n){
	if (n <= 0) return -1;
	int valor_min = 0;
	for(int i = 1; i < n; i++){
		if(v[valor_min] > v[i]){
			valor_min = i;
		}
	}
	return valor_min;
}
int indice_max(const int *v, int n){
	if (n <= 0) return -1;
	int valor_max = 0;
	for(int i = 1; i < n; i++){
		if(v[valor_max] < v[i]){
			valor_max = i;
		}
	}
	return valor_max;
}

//EX14
void remove_primeiro(int *v, int *n, int alvo){
	int indice_alvo = -1;
	for(int i = 0; i < *n; i++){
		if(alvo == v[i]){
			indice_alvo = i;
			break;
		}
	}
	if(indice_alvo != -1){
		for(int i = indice_alvo; i < (*n)-1; i++){
			v[i] = v[i+1];
		}
		(*n)--;
	}
}

//EX15
void inverte(int *v, int n){
	int i = 0;
	int j = n - 1;
	while(i < j){
		int temp = v[i];
		v[i] = v[j];
		v[j] = temp;
		i++;
		j--;
	}
}