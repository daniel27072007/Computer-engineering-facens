#include <stdio.h>
#include <math.h>
#include <string.h>

int soma (int a, int b) {
	return (a + b);
}

char* eh_par (int n){
	if(n % 2 == 0){
		return "par";
	}
	return "impar";
}

int maior (int a, int b) {
	if(a > b){
		return a;
	}
	return b;
}

int potencia (int n, int e){
	int x = n;
	for(int i = 0; i < e; i++){
		x = x * n;
	}
	return x;
}

int fatorial (int n) {
	if(n == 0 || n == 1){
		return 1;
	}
	return n * fatorial(n-1);
}
 

int main (){
	int a = 10, b = 5, r;
	printf("\na = %i b = %i", a, b);
	
	int somaValor = soma(a,b);
	printf("\nSoma: %i", somaValor);
	
	char ehParValor[6];
	strcpy(ehParValor, eh_par(a));
	printf("\nPar: %s", ehParValor);
	
	int maiorNumero = maior(a,b);
	printf("\nMaior: %i", maiorNumero);
	
	int potenciaValor = potencia(a,b);
	printf("\nPotencia: %i", potenciaValor);
	
	int fatorialValor = fatorial(b);
	printf("\nFatorial: %i", fatorialValor);
	
	return 0;
}
